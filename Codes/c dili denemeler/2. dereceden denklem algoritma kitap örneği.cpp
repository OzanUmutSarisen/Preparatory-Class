#include<stdio.h>

int main () {
	int a,b,c,x,fx;
	printf("X karenin katsayisini giriniz \t");
	scanf("%d",&a);
	printf("X in katsayisini giriniz \t");
	scanf("%d",&b);
	printf("sabit sayiyi giriniz \t");
	scanf("%d",&c);
	printf("X in degerini giriniz \t");
	scanf("%d",&x);
	
	fx=a*x*x+b*x+c;
	printf("cevap = %d",fx);
}
