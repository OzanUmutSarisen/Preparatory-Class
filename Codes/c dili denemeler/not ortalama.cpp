#include<stdio.h>

int main() {
	float vo,vt,f,vp,sonuc;
	printf("1. vizenizi giriniz :\t");
	scanf("%f",&vo);
	printf("2. vizenizi giriniz :\t");
	scanf("%f",&vt);
	printf("Quiz ortalamalari :\t");
	scanf("%f",&vp);
	printf("final notunuzu giriniz :");
	scanf("%f",&f);
	vo=vo/5.0;
	vt=vt/5.0;
	vp=vp/5.0;
	f=(f*2.0)/5.0;
	sonuc=vo+vt+vp+f;
	printf("Donem ortalamaniz : %0.1f",sonuc);
}
