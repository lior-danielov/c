#include<stdio.h>
/*
void swap1(int a, int b) {

    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void swap2(int* p1, int* p2) {

    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;


}

void main() {

    int x = 3, y = 7;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;

    //swap1(x, y);
    //swap2(&x, &y);
    swap2(ptr1, ptr2);

    printf("x=%d, y=%d \n\n", x, y);


}

*/
// יש לאתחל מערך של מספרים שלמים בגודל 7 במספרים כלשהם. יש לאתחל מצביע לסוף המערך ולהציג באמצעות המצביע את תוכן כל תאי המערך מהסוף להתחלה.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void ex49() {
    
    #define SIZE 7

    int arr[] = {1,2,3,4,5,6,7};
    int i = 0;

    int* ptr;
    ptr = &arr[SIZE];

    for(i = SIZE; i > 0; i--) {
        printf("%d  ", * --ptr);
    }
}
//יש לאתחל מערך של מספרים שלמים בגודל 7 במספרים כלשהם. יש להציג באמצעות מצביע ערכים אקראיים מתוך מערך.
void ex50() {
    int arr[] = { 1,2,3,4,5,6,7 };
    int i = 0;
    int* ptr;
    ptr = &arr[0];
    int random = 0;
    
    for (; i < 7; i++) {
        random = arr[rand() % 7] -1;
        printf("%d  ",*ptr + random);
    }
}
//יש לאתחל מערך של תווים עם שמכם. יש להציג באמצעות מצביע את המחרוזת.
void ex51() {
    char arr[] = "lior danielov";
    int i = 0;
    char* ptr;
    ptr = &arr[0];
    for (; i < 13; i++) {
        printf("%s  ", arr[i]);
    }
}
void main(){

    srand(time(NULL));

    //ex49();
    //ex50();
    ex51();
}