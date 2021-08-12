#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) 
{

	char key[] = "AABBCCDDEEFF";

	if (argc !=2)
	{
		printf("\nUsage: %s <license key>\n");
		return 1;
	}

	if (strlen(argv[1]) != strlen(key))
	{
		printf("\nERROR. License key should contains 12 symbols.\n");
		return 1;
	}

	if (strcmp(argv[1], key) != 0)
	{
		printf("\nERROR. License key is incorrect.\n");
	}

	printf("\nCongratulations! License key is correct.\n");
	return 0;
}
