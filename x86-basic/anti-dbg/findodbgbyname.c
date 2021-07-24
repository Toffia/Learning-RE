#include <stdio.h>
#include <windows.h>

#pragma comment(lib, "user32.lib")

BOOL CALLBACK findDebugger(HWND hWnd, LPARAM lParam) {
	
	char windowName[64];
	
    GetWindowText(hWnd, windowName, sizeof(windowName));
	
	if (strstr(windowName, "OllyDbg") != 0) { return FALSE; }
	
	return TRUE;
}

int main(int argc, char* argv[]) {
	
  if (EnumWindows(findDebugger, 0) == FALSE) {	
    printf("\nDebugger has been detected!\n");
    return 0;
  }

  printf("\nIt's OK!\n");
  
  return 0;
}
