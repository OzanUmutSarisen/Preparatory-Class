#include<stdio.h>

int main() {
	int a, b, c;
	printf("please write the first lenght for triangle\n");
	scanf("%d", &a);
	printf("please write the second lenght for triangle\n");
	scanf("%d", &b);
	printf("please write the third lenght for triangle\n");
	scanf("%d", &c);

	if (a<(b+c) && /* a> | b - c| */ b<(a+c) && /* b> | a - c | */  c<(a+b) /* c> | a - b | */ ) {
		if (a == b && a == c){
			printf("this triangle is equilateral");
		}
		else if (a == b || a == c || b == c){
		printf("this triangle is isoscele");
		}
		else{
			printf("this triangle is scalere");
		}
	}
	else printf("it is not triangle");
}
