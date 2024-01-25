#include <stdio.h>


void ex1() {

    // declare vars
    int number=0, currentDigit, max=0, min=9;


    // input number
    printf("Enter a number:");
    scanf_s("%d", &number);


    // loop to check each digit
    while (number != 0) {
            // compare digit with max and min till now
            currentDigit = number % 10;

            // insert if needed
            //             if (currentDigit > max)
                    max = currentDigit;

            if (currentDigit < min)
                    min = currentDigit;

            // remove most right digit
            number = number / 10; // number/=10;
    }
    // display max-min
    printf("difference = %d \n\n", max - min);

}
void ex2() {
    int num1 = 0, num2 = 0, i = 0, j = 0;
    printf("please enter number 1: ");
    scanf_s("%d", &num1);
    printf("please enter number2: ");
    scanf_s("%d", &num2);
    for (i = 9; i > 0; i--) {
       if (num1 % i == 0 && num2 % i == 0) {
            printf("%d ,", i);
        }
    }
}
void palindrom() {

    //declare vars
    int num1, num2, num3 = 0;

    // input number
    printf("Enter  number:");
    scanf_s("%d", &num1);

    num2 = num1;

    // reverse num1 to num2
    while (num2 != 0) {

        num3 = num3 * 10;
        num3 = num3 + num2 % 10;
        num2 = num2 / 10;
    }

    // check if original and reverse are equals
    if (num1 == num3) {
        printf("polindrom. \n");

    }
    else {
        printf("NOT polindrom \n");

    }

}
void duble() {
    int arr[] = { 0 }, i = 0, num_of_index = 0, sum = 0, j = 0, avg = 0,h=0;
    printf("please enter number of in array indexes: ");
    scanf_s("%d", &num_of_index);
    for (i = 0; i < num_of_index; i++) {
        printf("please enter num for array: ");
        scanf_s("%d", &arr[i]);
    }
    for (h = 1; h < sizeof(arr); h+2) {
        sum +=  arr[h];
    }
    printf("%d", sum);
    for (; j < sizeof(arr); i++) {
        avg = avg + arr[j];
    }
    printf("%d", avg / int(sizeof(arr)));
}

void main() {
    //ex1();
    //ex2();
    //palindrom();
    duble();
}