#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 12

void main()
{

	srand(time(NULL));

	// create array
	char arr[SIZE];
	int i;

	// initialize with random letters
	for (i = 0; i < SIZE - 1; i++)
		arr[i] = (char)(rand() % 26 + 'A');

	arr[SIZE - 1] = '\0';

	puts(arr);

	// memory allocation
	char* str;
	str = (char*)malloc(sizeof(char) * SIZE);

	// initialize with random letters
	for (i = 0; i < SIZE - 1; i++)
		str[i] = (char)(rand() % 26 + 'A');

	// sign last element with '\0'
	str[SIZE - 1] = '\0';

	puts(str);

	// free memory!
	free(str);

	// display str after free memory
	puts(str);
}
