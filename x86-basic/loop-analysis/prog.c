#include <windows.h>

#pragma comment(lib,"user32.lib")

int main(int argc, char* argv[]) {

	char text[] = "qwerty";
	char title[] = "Prog-3.2";
	
	for(int i = 0; i < 6; i++) {
		text[i] -= 0x20;
	}

	MessageBox(NULL, text, title, 0);

	while (text[0] != 'A') {
		text[0]--;
	}

	MessageBox(NULL, text, title, 0);

	do {
		text[5]++;
	} while (text[5] != 'Z');

	MessageBox(NULL, text, title, 0);

	return 0;
}
