#include<stdio.h>
#include<locale.h>
int tk(int);
int main () {
	setlocale(LC_ALL,"Turkish");
	int v=0;
	while (v!=EOF){
	
		printf ("karenin bir kenarýnýn kaç birim olduðunu belirtiniz : ");
		int x;
		scanf ("%d",&x);
		printf ("tane kare vardýr : %d\n",tk(x));
	}
}

int tk(int x){
	if (x==1)
		return 1;
	return tk(x-1)*4+1;
}
	
