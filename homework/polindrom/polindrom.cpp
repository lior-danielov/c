#include <stdio.h>
#include <math.h>

int Palindrom(int num) {
	//input of user
	int digit = num;
	int i, isEqual = 0;
	//check if the number equal srart beegen to end
	for (; num > 0;) {
		isEqual = isEqual * 10 + num % 10;
		num /= 10;
	}
	if (digit == isEqual) {
		
		printf("the number is palindrom");
	}
	else{
		printf("is NOT palindrom");
	}
	return 0;
}
int main() {
	int number;
	printf("please enter a number: ");
	scanf_s("%d \n", &number);
	Palindrom(number);
	
	return 0;
}



