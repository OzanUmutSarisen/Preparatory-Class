#include<stdio.h>
#include<locale.h>
int fact(int);
int comb(int,int);
int main () {
	int x,y;
	setlocale(LC_ALL,"turkish");
	printf("lüfen iki sayý giriniz : ");
	scanf("%d%d",&x,&y);
	printf("girdiniz sayýnýn kombinasyonu : %d",comb(x,y));
	
}
int comb(int x,int y){
	/*return fact(x)/(fact(y)*fact(x-y));*/
	int tx=1;
	int ty=1;
	int i=y;
	if (x/2>=y){
		while(i>=1){
		tx*=x;
			x--;
			i--;
		}
		while (y>=1){
			ty*=y;
			y--;
		}
	}
	else {
		y=x-y;
		while(y>=1){
		tx*=x;
			x--;
			y--;
		}
		while (y>=1){
			ty*=y;
			y--;
			
		}
	}
	
	int sonuc=tx/ty;
	return sonuc;
}
/*int fact(int x){
	int sonuc=1;
	while (x>=1){
		sonuc*=x;
		x--;
	}
	return sonuc;
}*/

/*int comb(int x,int y){
	fact(x)/fact(y);
}
int fact (int x){
	int sonuc=1;
	
}*/
	



