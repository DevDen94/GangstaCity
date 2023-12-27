using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace PedestrianSystem{

	public class Pedestrian : MonoBehaviour {
		Animator anim;
		public AudioClip DeathSound;
		public AudioClip policeSiren;
		public AudioSource Src;
		public GameObject CashPrefab;
		public enum MovementType
		{
			WALK, // will walk
			RUN, // will run
			Death
		}
		[Tooltip("Movement type of the pedestrian")]
		public MovementType movementType;

		[Tooltip("Target to which player will move and face towards")]
		public Transform target;

		[Tooltip("Pedestrian will walk with this speed")]
		[Header("Values")]
		public float walkSpeed = 0.001f;
		[Tooltip("Pedestrian will run with this speed")]
		public float runSpeed = 0.01f;
		[Tooltip("Pedestrian will rotate with this speed")]
		public float rotationSpeed = 1;
		public int deathvalue = 500;
		bool isDestroyed = false;
		public bool isDead = false;
		public bool isidle = false;
		private bool is_Last;
		public void OnPedDamage()
		{

			deathvalue = -50;
			if (deathvalue <= 0 && !is_Last)
			{

				//Debug.LogError("dEADnPC");
				is_Last = true;
				isDead = true;
				anim.SetInteger("MoveState", 3);
				movementType = MovementType.Death;
				Invoke("Delay", 3f);
				Invoke("Destroy_", 7f);
				Src.PlayOneShot(DeathSound);

			}
		}
		void Delay()
		{
			if (PoliceSystemActive.instance.PoliceSirenDelay_Complete && PlayerPrefs.GetInt("Mode_Select") ==2)
			{
				PoliceSystemActive.instance.PoliceActive = true;
				GameManger.instance.PoliceSirenFade.SetActive(true);
				Src.PlayOneShot(policeSiren);
			}

		}
		//set animator value of pedestrian according to the state choosen
		void Start() {
			is_Last = false;
			isidle = false;
			anim = this.GetComponent<Animator>();

			switch (movementType) {
				case MovementType.WALK:

					anim.SetInteger("MoveState", 1);

					return;

				case MovementType.RUN:

					anim.SetInteger("MoveState", 2);

					return;
			}

			set_Sound();
		
		}
		void set_Sound()
        {
			if (PlayerPrefs.GetInt("SFX") == 1)
			{
				Src.enabled = true;
			}
			else
			{
				Src.enabled = false;
			}
		}
		void Update() {
			if (isDead) return;

			if (isidle) return;
			PedestrianMovement();

			// if target is assinged. Rotate toward it accordingly
			if (target) {

				Quaternion targetRotation = Quaternion.LookRotation(target.position - this.transform.position, this.transform.up);
				targetRotation.x = 0; targetRotation.z = 0;
				this.transform.rotation = Quaternion.Lerp(this.transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);
			}
		}
		void Destroy_()
		{
			Instantiate(CashPrefab.transform, gameObject.transform.position, gameObject.transform.rotation);
			Destroy(gameObject);
		}
		//movement acfording to movement type
		void PedestrianMovement() {

			switch (movementType) {
				case MovementType.WALK:
					this.transform.position += this.transform.forward * Time.deltaTime * walkSpeed;
					return;
				case MovementType.RUN:
					this.transform.position += this.transform.forward * Time.deltaTime * runSpeed;
					return;
			}
		}

		//properly destroy current pedestrian
		public void DestroyPedestrian(PedestrianSystemManager pedestrianSystem) {

			if (!isDestroyed) {
				isDestroyed = true;
				pedestrianSystem.curPedestiansSpawned--;
				Destroy(this.gameObject);
			}
		}
		public BoxCollider box;
		//move to next waypoint once hit the target waypoint
		public void OnTriggerEnter(Collider col) {
			if (col.gameObject.tag == "Player")
			{
				isidle = true;
				anim.SetInteger("MoveState", 0);
			}
            if (col.gameObject.tag == "Car")
            {
				Debug.LogError("CarHit");
				Vector3 forceDirection = (transform.position - col.transform.position).normalized;
				GetComponent<Rigidbody>().AddForce(forceDirection * 20f, ForceMode.Impulse);
				anim.SetInteger("MoveState", 10);
				box.enabled = false;
				enabled = false;
				isDead = true;
				Src.PlayOneShot(DeathSound);
				Invoke("Destroy_", 10f);
			}
			if (col.gameObject.tag == "Waypoint") {
				target = col.GetComponent<Waypoint>().nextWaypoint.transform;
			}
			if (col.gameObject.tag == "Ignore Ragdoll")
			{
				OnPedDamage();
			}
		}
		
        private void OnTriggerExit(Collider other)
        {
			if (other.gameObject.tag == "Player")
			{
				Invoke("Delayonesec", 0.5f);
				
			}
		}
		void Delayonesec()
        {
			isidle = false;
			anim.SetInteger("MoveState", 1);
		}

	}
}
