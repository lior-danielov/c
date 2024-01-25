#include<stdio.h>
#include<math.h>

int isPrime(int num);
int sumPrimes(int myNum);
int view_Primes(int vNUm);

void main() {
    /*
    int number;

    printf("Enter a number: ");
    scanf_s("%d", &number);

    if (isPrime(number) == 1) // if(isPrime(number))
        printf("%d is prime \n", number);
    else
        printf("%d is NOT prime \n", number);
    */
    /*
    int result = sumPrimes(1000);
    printf("%d \n\n", result);
    */
    int number, i;
    printf("Enter a number: ");
    scanf_s("%d", &number);
    for (i = 1; i <= number; i++)
        if (isPrime(i) == 1) {
            printf("%d", i);
        }

}
// check if prime
int isPrime(int num) {

    int i;
    int sqrtNum = (int)sqrt(num);

    // search dividers (with loop)
    for (i = 1; i <= sqrtNum; i++)
        // if we found divider -> NOT PRIME
        if (num % i == 0) {
            return 0;
            break;
        }

    // if divider not found -> IS PRIME
    return 1;

}
int sumPrimes(int myNum) {

    int i, sum = 0;
    for (i = 1; i <= myNum; i++)
        if (isPrime(i) == 1)
            sum += i;

    return sum;
}
int view_Primes(int vNum) {

    int i, view = 0;
    for (i = 1; i <= vNum; i++)
        if (isPrime(i) == 1) {
            view = i;
            printf("%d", i);
        }
         
    return i;
}