#include <stdio.h>
#include <math.h>

int first() {
	int firstly = 0;
	scanf_s("%d please enter a number: ", &firstly);
	for (int i = firstly; i > 0; i--) {
		if (firstly % i == 0)
			printf("the number %d is not firstly" , firstly);
	}

}

int main(){
	printf("hi");

	return 0;
}