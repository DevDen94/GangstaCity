// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using System.Collections;

namespace PixelCrushers.DialogueSystem
{

    /// <summary>
    /// Deprecated by DialogueSystemTrigger.
    /// Shows the mouse cursor during conversations. If your regular gameplay hides the mouse cursor,
    /// attach this script to your player object. When the player starts a conversation, it will
    /// show the cursor so the player can use the response menu.
    /// </summary>
    [AddComponentMenu("")] // Deprecated
    public class ShowCursorOnConversation : MonoBehaviour
    {

#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7

		private bool wasCursorVisible;
		private bool wasCursorLocked;

		public void OnConversationStart(Transform actor) {
			wasCursorVisible = ControlFreak2.CFScreen.showCursor;
			wasCursorLocked = ControlFreak2.CFScreen.lockCursor;
			StartCoroutine(ShowCursorAfterOneFrame());
		}
		
		private IEnumerator ShowCursorAfterOneFrame() {
			yield return null;
			ControlFreak2.CFScreen.showCursor = true;	
			ControlFreak2.CFScreen.lockCursor = false;
		}
		
		public void OnConversationEnd(Transform actor) {
			ControlFreak2.CFScreen.showCursor = wasCursorVisible;
			ControlFreak2.CFScreen.lockCursor = wasCursorLocked;
		}

#else

        private bool wasCursorVisible;
        private CursorLockMode savedLockState;

        public void OnConversationStart(Transform actor)
        {
            wasCursorVisible = ControlFreak2.CFCursor.visible;
            savedLockState = ControlFreak2.CFCursor.lockState;
            StartCoroutine(ShowCursorAfterOneFrame());
        }

        private IEnumerator ShowCursorAfterOneFrame()
        {
            yield return null;
            ControlFreak2.CFCursor.visible = true;
            ControlFreak2.CFCursor.lockState = CursorLockMode.None;
        }

        public void OnConversationEnd(Transform actor)
        {
            ControlFreak2.CFCursor.visible = wasCursorVisible;
            ControlFreak2.CFCursor.lockState = savedLockState;
        }

#endif

    }

}
