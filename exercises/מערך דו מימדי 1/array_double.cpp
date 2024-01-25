#include<stdio.h>


#define ROWS 3
#define COLS 4

// 2D array with function
void display2D(int arr[][COLS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d  ", arr[i][j]);
        }

        printf("\n");

    }


}

void main() {

    int arr1[ROWS][COLS];
    int i, j;

    int arr2[3][3] = { {1,2,3},
                                {4,5,6},
                                {7,8,9} };

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)

            arr1[i][j] = 0;



    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d  ", arr1[i][j]);
        }

        printf("\n");

    }

    printf("\n\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", arr2[i][j]);
        }

        printf("\n");

    }

    printf("\n\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", arr2[j][i]);
        }

        printf("\n");

    }

    printf("\n\n");

    display2D(arr1, ROWS, COLS);

}
