#include<stdio.h>

int main () {
	int cevap,tekrar;
	printf("cevabinizi yaziniz : ");
	scanf("%d",&cevap);
	tekrar=1;
	while (cevap!=1&&tekrar!=3){
		printf("cevabiniz yanlis lutfen tekrar deneyin : ");
		tekrar++;
		scanf("%d",&cevap);
	}
	if (cevap==1)
		printf("Bir kazanimiz var tebrikler");
	else if (tekrar==3)
		printf("uzgunuz kaybettiniz");
		
}
