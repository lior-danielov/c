#include<stdio.h>
int main() {
	//declare time huer and minuts
	int huer, minuts, time;
	// input
	printf("please enter time on clock: \n");
	scanf_s("%d : %d", &huer, &minuts);
	//rintf(":");
	//scanf_s("%d", &minuts);
	//calculate
	time = (huer * 60) + minuts;
	//print
	printf("%d", time);



	return 0;
}

