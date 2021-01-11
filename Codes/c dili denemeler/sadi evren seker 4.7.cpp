#include<stdio.h>

int main () {
	int girilen=0;
	int ort;
	int n=-1;
	int toplam =0;
	while (girilen!=-9){
		scanf("%d",&girilen);
		n++;
		toplam = toplam+girilen;
	}
	printf ("ortalama : %d",(toplam+9)/n);
}
	

