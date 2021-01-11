#include<stdio.h>

int main() {
	
	float vt,f,vp=0,sonuc,qor,b,vor;
	int i,a=1,fr;
	printf("vizenin %% kaci katiliyorsa yaziniz :");
	scanf("%f",&vor);
	printf("kac vizeye girdiginizi belirtiniz :");
	scanf("%d",&i);
	while(i>=1){
		printf("%d. vize notunuzu giriniz :\t",a);
		scanf("%f",&b);
		vt=vt+b;
		a++;
		i--;
	}
	printf("quiz ortalamalarin %% kaci katiliyorsa yaziniz :");
	scanf("%f",&qor);
	printf("Quiz ortalamalari :\t");
	scanf("%f",&vp);
	printf("final lin %% kaci katiliyorsa yaziniz :");
	scanf("%d",&fr);
	printf("final notunuzu giriniz :");
	scanf("%f",&f);
	vp=(vp*qor)/100;
	vt=(vt*vor)/100;
	f=(f*fr/100);
	sonuc=vt+vp+f;
	printf("Donem ortalamaniz : %0.1f",sonuc);
	
	
	
}
