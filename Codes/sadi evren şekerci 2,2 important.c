#include<stdio.h>
//1010 101000
int main() {
	
	int a=10,b=3,c=7; /* an�n i�ine 10 b inin i�ine 3 c nin i�ine 7 at�ld� */
	printf("%5d",a+b);
	printf("\n%5d",a<<2); /* 2lik tabanda (yani 1-0 kullan�larak az�lan pc dilince 2 solo kayd�r) */
	printf("\n%5d",a>>2); /* �steki gibi sadece sa�a kayd�r */
	printf("\n%5d",(a+b)*2); /* normalde a+b parantezde de�il */
	printf("\n%5d",a%b); /*  */
	printf("\n%5d",a==b);
	printf("\n%5d",a>b);
	printf("\n%5d",a++);
	printf("\n%5d",++a);
	
}
