#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	char userInput[11];
	char currentPassword[] = "1212121212";

	memset(userInput, 0, sizeof(userInput));

	printf("Insert key: ");
	scanf_s("%s", userInput);

	if (strlen(userInput) > sizeof(userInput)) {
		printf("ERROR. License key should contains 10 symbols.\n");
		system("pause");
		return 1;
	} 

	if (strcmp(userInput, currentPassword) != 0) {
		printf("ERROR. Your license key is invalid.\n");
		system("pause");
		return 1;
	}
		
	printf("Congratulations! Your copy of application is licensed.\n");
	
	system("pause");
	return 0;
}
