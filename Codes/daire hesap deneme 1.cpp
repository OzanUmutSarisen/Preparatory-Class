#include<stdio.h>

int cevre(int);
int alan(int);
int hacim(int);
int main() {
	int sonuc;
	int a,pi=3;
	printf("lutfen bir sayi giriniz : ");
	scanf("%d",&a);
	printf("\n%d yari capli dairenin cevresi = %d",a,cevre(a));
	printf("\n%d yari capli dairenin alani = %d",a,alan(a));
	printf("\n%d yari capli kurenin hacmi = %d",a,hacim(a));
		
	
}

int cevre(int a){
	int pi=3;
	int sonuc;
	sonuc=2*pi*a;
	return sonuc;
	
}
int alan(int a){
	int pi=3;
	int sonuc;
	sonuc=a*a*pi;
	return sonuc;
}
int hacim(int a){
	int p=3;
	int sonuc;
	sonuc=4*a*a*a;
	return sonuc;
	
}
