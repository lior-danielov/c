#include<stdio.h>
#include<stdlib.h>
#include<time.h>


// display int array return common number 
void display_arr(int arr[], int length) {
	int i=0;
	if (arr[i] < 100) {
		for (i = 0; i < length; i++) {
			printf("%d  ", arr[i]);
		}
	}
	
	printf("\n\n");
}
// check if biger than 100
void check_number(int arr[], int length) {
	int i=0, check_num=1,count=0;
	if (arr[i] < 100) {
		for (i = 0; i < length; i++) {
			for (int j = 1; j < length; j++) {
				if (arr[i] == arr[j]) {
					count++;
				}
			}
		}
	}
	

}

void main() {
	srand(time(NULL));
	int arr1[8],i;
	for (i = 0; i < 8; i++) {
		arr1[i] = rand() % 41 + 60;
	}
	display_arr(arr1, 8);

	check_number(arr1, 8);



}