#include<stdio.h>

int main() {
	int foo=-1;
	while (foo<=9){
		foo++;
		
		int bar=0;
		while(bar<=10){
			printf("%d ",foo*bar);
			bar=bar+1;
			}
		printf("\n");
	} //while ile yaparsak
	
/*	for(int foo=0;foo<=10;foo++){
		for(int bar=0;bar<=10;bar++)
			printf("%d ",foo*bar);
	printf ("\n");	
	}	*/
}
