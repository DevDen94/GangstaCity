// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;

namespace PixelCrushers
{

    /// <summary>
    /// Methods to hide and show the cursor.
    /// </summary>
    public static class CursorControl
    {

        public static bool isCursorActive
        {
            get { return isCursorVisible && !isCursorLocked; }
        }

        public static void SetCursorActive(bool value)
        {
            ShowCursor(value);
            LockCursor(!value);
        }

#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6

        public static bool isCursorVisible
        {
            get { return ControlFreak2.CFScreen.showCursor; }
        }

        public static bool isCursorLocked
        {
            get { return ControlFreak2.CFScreen.lockCursor; }
        }

        public static void ShowCursor(bool value)
        {
            ControlFreak2.CFScreen.showCursor = value;
        }

        public static void LockCursor(bool value)
        {
            ControlFreak2.CFScreen.lockCursor = value;
        }

#else
		
		public static bool isCursorVisible
		{
			get { return ControlFreak2.CFCursor.visible; }
		}
		
		public static bool isCursorLocked
		{
			get { return ControlFreak2.CFCursor.lockState != CursorLockMode.None; }
		}
		
		private static CursorLockMode previousLockMode = CursorLockMode.Locked;
		
		public static void ShowCursor(bool value) 
		{
			ControlFreak2.CFCursor.visible = value;
		}
		
		public static void LockCursor(bool value) 
		{
			if (value == false && isCursorLocked) 
			{
				previousLockMode = ControlFreak2.CFCursor.lockState;
			}
			ControlFreak2.CFCursor.lockState = value ? previousLockMode : CursorLockMode.None;
		}
		
#endif

    }

}
