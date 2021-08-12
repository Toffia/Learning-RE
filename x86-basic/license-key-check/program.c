#include <stdio.h>

#pragma comment(lib,"user32.lib")

int sum_ascii(char *);

int main(int argc, char* argv[]) {

	int result = 0;
	char title[] = "Prog-3.3";

	if (argc < 2) {
		printf("\nUsage: prog-3.3.exe <license key>\n");
		return 0;
	}

	result = sum_ascii(argv[1]);
	if (result == 1000) {
		printf("\nCongrats! Key is correct!\n");
	} else {
		printf("\nOops! Key is incorrect!\n");
	}
	return 0;
}

int sum_ascii(char *str) {
	int sum = 0;
	int len = strlen(str);
	for(int i = 0; i < len; i++) {
		sum += str[i];
	}
	return sum;
}
