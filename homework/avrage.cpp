#include<stdio.h>
void main() {
	//decleare
	float grade1, grade2, grade3, avg;
	//input
	scanf_s("%f %f %f", &grade1, &grade2, &grade3);
	//calculate
	avg = (grade1 + grade2 + grade3) / 3;
	//display
	//printf(" the avarege is: %f", avg);
	//condition:
	if (avg > 90)
		printf("you are excelent student");
	else if (avg < 55)
		printf("you are need to improve");
	else
		printf("");
}