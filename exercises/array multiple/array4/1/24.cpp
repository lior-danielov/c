#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void pointer_array() {

	int arr[3][3] = { {1,2,3},{3,4,5},{6,7,8} };
	int* ptr;
	ptr = &arr[0][0];

	for(int i=0;i<9;i++)
		printf("%d", *ptr++);
}
int check_pisga(int num[], int i) {
    if(num[i - 1] < num[i] && num[i] > num[i + 1]){
        printf("the pisga number is: %d", num[i]);
    }
    return 0;
}
int string_array()
{
    char a[20] = "Program";
    char b[20] = { 'P','r','o','g','r','a','m','\0' };

    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n", strlen(a));
    printf("Length of string b = %zu \n", strlen(b));

    return 0;
}
void str_check(char arr1[], char arr2[]) {
    printf("%s\n%s\n", arr1, arr2);
    if (strlen(arr1) > strlen(arr2)) {
        arr2 = arr1;
        printf("%s\n%s", arr1, arr2);
    }
    else {
        arr2 = arr1;
        printf("%s\n%s", arr2, arr1);
    }
}
/*
void input_customer(char arr1[],char arr2[]) {


    for (int i = 0; i < 5; i++) {
        puts("please enter string");
        gets_s(arr1);
    }
    if (strlen(arr1) > strlen(arr2)) {
        strcpy_s(arr2, arr1);
    }
    printf("the big str is: %s", arr2);
}

*/



int main() {
    //int num1[] = { 1,3,2 }, i = 1;
    ///check_pisga(num1, i);
    //char arr[10] = "ASFDED"; 
    //char arr_two[10] = "HELLOWORL";
    //str_check(arr, arr_two);
    char arr1[20] = "", arr2[20] = "";
  
    for (int i = 0; i < 5; i++) {
        puts("please enter string");
        gets_s(arr1);
    }
    if (strlen(arr1) > strlen(arr2)) {
        strcpy_s(arr2, arr1);
    }
    printf("the big str is: %s", arr2);
    //input_customer(arr1, arr2);
    return 0;
}
