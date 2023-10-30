using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
public class LinerNavigation : MonoBehaviour
{
    public Transform player; // Reference to your player character
    public Transform destination; // Reference to your destination point
    public float pointSpacing = 0.1f; // Adjust this for the spacing between points
    public LineRenderer lineRenderer;

    private List<Vector3> pathPoints = new List<Vector3>();

    private void Update()
    {
        UpdatePath();
        UpdateLineRenderer();
    }

    private void UpdatePath()
    {
        // Clear the current path points
        pathPoints.Clear();

        // Add player's current position as the starting point
        pathPoints.Add(player.position);

        // Add additional points along the path from player to destination
        Vector3 direction = (destination.position - player.position).normalized;
        float distance = Vector3.Distance(player.position, destination.position);

        for (float d = pointSpacing; d < distance; d += pointSpacing)
        {
            Vector3 point = player.position + direction * d;
            pathPoints.Add(point);
        }

        // Add the destination point
        pathPoints.Add(destination.position);
    }

    private void UpdateLineRenderer()
    {
        lineRenderer.positionCount = pathPoints.Count;
        lineRenderer.SetPositions(pathPoints.ToArray());
    }
}
