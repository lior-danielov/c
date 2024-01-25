#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

int numbers_Array() {
	int num[5];
	int i = 0;
	printf("please enter five numbers: ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d  ", &num[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%d  ", num[i]);
	}
	return 0;
}
int num_loop(int arr[], int length, int value) {
	int i, counter = 0;
	for (i = 0; i < length; i++)
		if (value == arr[i])
			counter++;
	return counter;

}

int num_repeat(int arr[],int length) {
	int i, repaetnum = 0;
	int max_Count_Value = arr[0], maxcount = num_loop(arr,length,arr[0]), mincount = 1;
	for (i = 0; i < length; i++) {

		max_Count_Value = num_loop(arr, SIZE, arr[i]);

		if (max_Count_Value > maxcount) {
			maxcount == max_Count_Value;
			max_Count_Value = arr[i];
		}
	}
			
			
	printf("counter: %d\n ", maxcount);
	return max_Count_Value;
}

void main() {
	//numbers_Array();
	int arr1[] = { 2,6,6,6,10 };
	int result = num_repeat(arr1, SIZE);
	printf("value: %d\n\n", result);

}
