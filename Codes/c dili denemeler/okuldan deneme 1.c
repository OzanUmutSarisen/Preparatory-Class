#include<stdio.h>

int main() {
	
	float a,b;
	int max;
	float add,min;
	max=3;
	min=1.5;
	add=0.7;
	a=min;
	while(a<=max) {
		b=(a+25)+99*(a*a+5);
		printf("%8.2f%13.3f\n",a,b);
		a=a+add;
		
		
	}
	
}
