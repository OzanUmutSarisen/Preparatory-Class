#include<stdio.h>

int main () {
	/*int foo = 1;
	while (foo<=10){
		int bar=1;
		foo++;
		while (bar<foo){
			printf("*");
			bar++;
			}
		printf("\n");
	}*/
	
	for (int foo=1;foo<=10;foo++){
		for (int bar=1;bar<=foo;bar++)
			printf("*");
		printf("\n");
	}
}
