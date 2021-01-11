#include<stdio.h>
int main ()  {
	
	int f;
	for (f=0;f<=300;f=f+20) {
		printf("\n%8d%13f",f,(5.0/9.0)*(f-32));
		
	}
	
}
