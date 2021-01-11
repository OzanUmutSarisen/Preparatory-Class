#include<stdio.h>

int main() {
	int a,b,c;
	c=10;
	b=4;	
	a=b&c;	
	b=c|a&2;
	c=c<<2;
	printf("%5d%5d%5d",a,b,c);
	
}
