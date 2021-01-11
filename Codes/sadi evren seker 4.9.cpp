#include<stdio.h>

int main() {
	/*int foo=10;
	while (foo >=1){
		foo--;
		int bar=0;
		while (bar<=foo){
			printf("*");
			bar++;
		}
		printf("\n");
	}*/
	
	for(int foo=10;foo>=0;foo--){
		for(int bar=1;bar<=foo;bar++)
			printf("*");
		printf("\n");
	}
		
}
