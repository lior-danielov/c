#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 6

// display all elements
void displayArray(int array[], int length) {

    int i;
    for (i = 0; i < length; i++)
        printf("%d  ", array[i]);
}

void order_Array(int array[], int length) {

    int i;
    for (i = length; i >= 0; i--)
        printf("%d  ", array[i]);
}
void check_Array(int array[], int length) {

    int i;
    for (i=length; i >= 0;i--)
        printf("%d  ", array[i]);
}
void loto_Array(int array[], int length) {
    int i,arr5[5];
    length = sizeof(arr5) / sizeof(arr5[0]);
    for (i = 0; i < length; i++) {
        printf("%d  ", arr5[i]);
        i++;
    }
}

void main() {

    srand(time(NULL));
    
    int arr1[SIZE], i, j;
    int arr4[] = { 1,2,3,4,5,6,7 };
    for (i = 0; i <= SIZE; i++) {
        arr1[i] = rand() % 34;
    }
    for (j = 0; j <= 7; i++) {
        arr4[j] = j + 1;
    }
    
    
 
    //loto_Array(arr5, 8);
    //loto_Array(arr4, 7);
    
    /*
    int arr2[] = { 2,6,5,4,3,4,5,88,9 };
    
    arr1[0] = 1000;
    
    int arr3[] = { 2,4,6,8,10 };
    
    arr1[6] = 12;

    printf("%d", arr1[0]);

    for(i=0;i< SIZE;i++)
        printf("%d  ", arr1[i]);

    //displayArray(arr2, 9);

    //printf("\n\n\n");

    //displayArray(arr1, SIZE);
    */
}
