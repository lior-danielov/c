#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void reverse(int array[] , int length) {
	int temp, start = 0, end = length - 1;
	while (start < end)
	{
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i < length; i++) {
		printf("%d\n ",array[i]);
	}

}
void main() {
	int length;
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	length = sizeof(arr1) / sizeof(arr1[0]);
	reverse(arr1, length);
}