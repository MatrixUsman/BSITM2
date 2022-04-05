#include "main.h"

MAIN MENU 
{
	POPUP "&File"
	{
		MENUITEM "&New", CM_FILE_NEW
		MENUITEM "&Open...", CM_FILE_OPEN
		MENUITEM "&Save", CM_FILE_SAVE, GRAYED
		MENUITEM "Save &As...", CM_FILE_SAVEAS, GRAYED
		MENUITEM SEPARATOR
		MENUITEM "E&xit", CM_FILE_EXIT
	}
	
	POPUP "&Edit", GRAYED
	{
		MENUITEM "&Undo\tCtrl+Z", CM_EDIT_UNDO
		MENUITEM SEPARATOR
		MENUITEM "Cu&t\tCtrl+X", CM_EDIT_CUT
		MENUITEM "&Copy\tCtrl+C", CM_EDIT_COPY
		MENUITEM "&Paste\tCtrl+V", CM_EDIT_PASTE
	}
	
	POPUP "&Window", GRAYED
	{
		MENUITEM "&Cascade", CM_WINDOW_CASCADE
		MENUITEM "Tile &Horizontal", CM_WINDOW_TILEHORZ
		MENUITEM "Tile &Vertical", CM_WINDOW_TILEVERT
		MENUITEM "Arrange &Icons", CM_WINDOW_ARRANGE
	}
}
