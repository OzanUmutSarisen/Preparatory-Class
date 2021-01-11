#include <stdio.h>

int main() {
	int n;
	printf("please write a number : ");
	scanf("%d",&n);
	if (n == 1)
		printf("This number is not prime");
	int a = 2;
	while (n>a) {
		int b = n % a;
		if (b == 0)
			printf("This number is not prime");
		a++;
	}
	printf("This number is Prime");
}
