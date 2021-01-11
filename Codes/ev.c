#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	printf("Enter size of the house: ");
	scanf("%d",&size);
	int bsl, ast = 1 ,line = 1;
	for (bsl = size/2;bsl>= line; bsl--) {
		printf(" ");
	}
	for (ast = 1; ast <= line; ast++) {
		printf("*");
	}
	}
