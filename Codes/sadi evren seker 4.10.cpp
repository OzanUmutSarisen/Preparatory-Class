#include<stdio.h>

int main () {
	/*int foo=10;
	while (foo>=0){
		foo--;
		int bar=0;
		int a=9-foo;
		while (a>=1){
	
			printf(" ");
			a--;
			}
		while (bar<=foo){
			bar++;
			printf("*");
			
		}
		printf("    %d",bar);
		printf("\n");
	}*/
	for(int foo=10;foo>=1;foo--){
		for(int a=10-foo;a>=1;a--)
			printf(" ");
		for(int bar=1;bar<=foo;bar++)
			printf("*");
		printf("\n");
		
	}
}
