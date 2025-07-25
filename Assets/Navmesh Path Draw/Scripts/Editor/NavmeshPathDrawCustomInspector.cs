﻿using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(NavmeshPathDraw))]
public class NavmeshPathDrawCustomInspector : Editor
{
    SerializedProperty destination,Player,
    recalculatePath,
    recalculationTime,
    groundLayers;

    void OnEnable(){
        Player= serializedObject.FindProperty("Player");
        destination = serializedObject.FindProperty("destination");
        recalculatePath = serializedObject.FindProperty("recalculatePath");
        recalculationTime = serializedObject.FindProperty("recalculationTime");
        groundLayers = serializedObject.FindProperty("groundLayers");
    }

    public override void OnInspectorGUI(){
        var button = GUILayout.Button("Click for more tools");
        if (button) Application.OpenURL("https://assetstore.unity.com/publishers/39163");
        EditorGUILayout.Space(5);

        NavmeshPathDraw script = (NavmeshPathDraw) target;
        EditorGUILayout.PropertyField(Player, new GUIContent("Player", "Transform position of the Player"));
        EditorGUILayout.PropertyField(destination, new GUIContent("Destination", "Transform position of the end destination"));
        EditorGUILayout.PropertyField(recalculatePath, new GUIContent("Recalculate Path", "If set to true, the pathfinding will be recalculated every set amount of time"));
        
        EditorGUI.BeginDisabledGroup(script.recalculatePath == false);
            EditorGUILayout.PropertyField(recalculationTime, new GUIContent("Recalculation Time", "The amount of time in seconds to recalculate the path. The higher the number, the more performant on CPU but slower to pathfind. It all depends on your game and target hardware. It's usually best to keep this from 0.1 - 0.5 seconds"));
        EditorGUI.EndDisabledGroup ();

        EditorGUILayout.PropertyField(groundLayers);

        serializedObject.ApplyModifiedProperties();
    }
}
