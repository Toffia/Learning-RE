#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[]) { 

  BOOL isDebugged = IsDebuggerPresent();

  if (isDebugged) {
    printf("\nDebugger has been detected!\n");
	return 0;
  }

  printf("\nIt’s OK\n");
  return 0;
}
