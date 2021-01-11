#include<stdio.h>

int fact(int);
int main() {
	printf("bir sayi yaziniz :");
	int x;
	scanf("%d",&x);
	printf("girilen sayinin faktoriyeli : %d",fact(x));
}
int fact(int x){
	if (x==0)
		return 1;
	return x*fact(x-1);
}
