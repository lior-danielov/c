#include<stdio.h>
int ex1() {
	int a = 1, b = 2, c = 3;
	for (int i = c; i < 52; i++) {
		a = b + c;
		b = c;
		c = a;
		printf("%d \n", a);
	}
	return 0;
}
int doul_Loop() {
	for (int i = 0; i <= 200; (i += 2)) {
		printf("%d ", i);
	}
	return 0;
}
int per_cent() {
	double i;
	for (i = 0.0; i <= 5; (i += 0.5)) {
		printf("%.2lf \n", i);
	}
	return 0;
}
int student_grade() {
	double avg = 0, d = 0;
	for (double i = 0; i < 8; i++) {
		scanf_s("%lf", &i);
		avg = avg + i;
	}
	avg = avg / 7;
	printf("%lf", avg);
	return 0;
}
int Assembl_num() {
	int num = 0, d = 0;
	printf("Enter your number please: ");
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++) {
		num /= i;
		printf("%d*", i);
	}
	return 0;
}
int Assembl_num_y_or_n() {
	// declare vars
	int num = 0, d = 0;
	//input facctorial result
	printf("Enter your number please: ");
	scanf_s("%d", &num);
	double caulculate = num;
	// calculate
	for (int i = 1; i <= caulculate; i++) {
		caulculate /= i;
		printf("%d*", i);
	}
	printf("%lf \n", caulculate);
	if (caulculate == 1) {
		printf("its assembly number");
	}
	else {
		printf("its no assembly number");
	}
	return 0;
}


int main() {
	//ex1();
	//doul_Loop();
	//per_cent();
	//student_grade();
	//Assembl_num();
	Assembl_num_y_or_n();
	return 0;
}