#include<stdio.h>

int fact(int);
int main() {
	printf("bir sayi yaziniz :");
	int x;
	scanf("%d",&x);
	printf("girilen sayi faktoriyelinin faktoriyeli : %d",fact(fact(x)));
}
int fact (int x){
	int sonuc=1;
	int i=1;
	while (i<=x){
		sonuc=sonuc*i;
		i++;
	}
	return sonuc;
}
