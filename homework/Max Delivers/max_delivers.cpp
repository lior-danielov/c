#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// count dividers
int countDividers(int num) {

    int counter = 0, i;
    // equal i to num / 2 because the calculate enughf to check divider.
    for (i = 1; i <= num / 2; i++)
        if (num % i == 0) // i is divider
            counter++; // count as divider
    // the function return only NOT in void.
    return counter;

}

// display number with max dividers
void displayNumWithMaxDividers(int max) {

    int number, maxDividers = 0, maxNumber = 0, i;

    for (i = 1; i <= 10; i++) {

        number = rand() % max + 1;
        printf("%d: %d\n", i, number);

        //we also can to add condition if the first number is the max ? if no enter to this condition.
        if (countDividers(number) > maxDividers) {
            maxNumber = number;
            maxDividers = countDividers(maxNumber);
        }
        
    }//print the integer max number and the integer maximum od diveders.
    printf("\n\nnumber is: %d, dividers: %d \n\n", maxNumber, maxDividers);

}

void main() {
    // we have to include the library time to library random(stdlib.h) only (stdlib.h) not work.
    srand(time(NULL)); // synch with clock

    // choose a number to check from 1 to maxNumber.
    displayNumWithMaxDividers(1000);

}
