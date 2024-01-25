#include <stdio.h>
#include <math.h>

#define row 5
#define col 5

int display(int arr[row][col]) {
	int i, j;
	int rows = 0, cols = 0, arr1[row][col], value = 1;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			arr1[i][j] = value++;
			printf("%d  ,", arr1[i][j]);
		}
		printf("\n");
	}

}

int main() {
	printf("hi");
	return 0;
}