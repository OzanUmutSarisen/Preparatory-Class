#include<stdio.h>
//1010 101000
int main() {
	
	int a=10,b=3,c=7; /* anýn içine 10 b inin içine 3 c nin içine 7 atýldý */
	printf("%5d",a+b);
	printf("\n%5d",a<<2); /* 2lik tabanda (yani 1-0 kullanýlarak azýlan pc dilince 2 solo kaydýr) */
	printf("\n%5d",a>>2); /* üsteki gibi sadece saða kaydýr */
	printf("\n%5d",(a+b)*2); /* normalde a+b parantezde deðil */
	printf("\n%5d",a%b); /*  */
	printf("\n%5d",a==b);
	printf("\n%5d",a>b);
	printf("\n%5d",a++);
	printf("\n%5d",++a);
	
}
