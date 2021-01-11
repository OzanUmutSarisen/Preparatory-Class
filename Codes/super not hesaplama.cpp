#include<stdio.h>

int main() {
	float vo,vt,f,vp,sonuc,qor;
	int vor,fr;
	printf("vizenin %% kaci katiliyorsa yaziniz :");
	scanf("%d",&vor);
	printf("1. vizenizi giriniz :\t");
	scanf("%f",&vo);
	printf("2. vizenizi giriniz :\t");
	scanf("%f",&vt);
	printf("quiz ortalamalarin %% kaci katiliyorsa yaziniz :");
	scanf("%f",&qor);
	printf("Quiz ortalamalari :\t");
	scanf("%f",&vp);
	printf("final lin %% kaci katiliyorsa yaziniz :");
	scanf("%d",&fr);
	printf("final notunuzu giriniz :");
	scanf("%f",&f);
	vo=(vo*vor)/100;
	vt=(vt*vor)/100;
	vp=(vp*qor)/100;
	f=(f*fr/100);
	sonuc=vo+vt+vp+f;
	printf("Donem ortalamaniz : %0.1f",sonuc);
}
