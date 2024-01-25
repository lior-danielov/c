
#include<stdio.h>

/*
programmer: udi malka
date:
display Hello world on screen

*/

void main() {

    int a, b = 12, c;

    a = 1;

    c = -144;

    c = a + b; // 13

    printf("%d \n\n", c);

    a = a + c; // 14
    printf("a is: %d \n\n", a);


    a += c; // 27
    printf("a is: %d \n\n", a);

    a /= 3;
    printf("a is: %d \n\n", a); // 9

    a %= 4; // a=a%4;
    printf("a is: %d \n\n", a);


    // display hello to screen
    //printf("Hello world \n\n"); // display hello world

    printf("first value is: %d \n\n", a);
    printf("second value is: %d \n\n", b);
    printf("third value is: %d \n\n", c);

    printf("first=%d, second=%d, third=%d \n\n", a, b, c);
}
