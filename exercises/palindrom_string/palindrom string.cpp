#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palind(char arr[]) {
	bool condition = true;
	for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] != arr[strlen(arr)- i -1]) {
				condition = false;
			}
	}
	return condition;

}
	

void main() {
	char arr1[] = "abccba";
	if (palind(arr1)) {
		printf("this is palindrom");
	}
	else
	{
		printf("not palindrom");
	}

}