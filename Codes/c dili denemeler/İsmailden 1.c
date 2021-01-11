#include<stdio.h>

int main() 
{
	float a,b;
	int max,min;
	float add;
	max=1217;
	min=777;
	add=2.5;
	a=min;
	while(a<=max) {
		b=(a+(a+3)-7*(77*a+55))/80.0;
		printf("%8.0f%18.7f\n",a,b);
		a=a+add;
	}
	
	
	
}
