#include <stdio.h>
#include <math.h>


int isPrime(int num) {

	int isPrimeFlag = 1, i;
	int sqrtNUM = int(sqrt(num));

	for(i=2;i<=sqrtNUM;i++)
		if (num % i == 0) {
			isPrimeFlag = 0;
			break;
		}
	return isPrimeFlag;
}
 //check if a numbeer special
int isSpecial(int num) {

	int i, sumSpecial = 0;

	// check all delivers -> add to sum
	for (i = 1; i <= num / 2; i++)
		if (num % i == 0)
			sumSpecial += 1;

	if (sumSpecial == num)
		return 1;

	return 0;

	//check of number equals to sum of delivers
}
void displayPerfects(int limit) {
	int i, isSpecialresult;
	for (i = 1; i <= limit; i++) {
		isSpecialresult = isSpecial(i);
		if (isSpecialresult == 1)
			printf("%d  ", i);
	}
		

}
int main() {
	/*
	if (isSpecial(12) == 1)
		printf("special \n \n");
	else
		printf("NOT secial \n\n");
	*/
	int number=0;
	printf("Enter a number:\n ");
	printf("");

    scanf_s("%d",&number);

	if (isPrime(number) == 1)
		printf("%d is prime \n ", number);
	else
	{
		printf("%d is NOT prime \n", number);
	}

	//displayPerfects(20000);
	return 0;
}