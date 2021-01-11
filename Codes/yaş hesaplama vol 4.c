#include<stdio.h>

int main () {
	int by,ba,bg,dy,da,dg;
	printf ("bugun tarihini girin lutfen (gunden baslayarak her girmede entirlayin lutfen)\n");
	scanf ("%d%d%d",&bg,&ba,&by);
	printf ("dogum tarihinizi girin lutfen (yine ayni sekilde)\n");
	scanf ("%d%d%d",&dg,&da,&dy);
	printf("yasiniz\t%d",((by*365*24+6+ba*24*30+bg*24)-((dy*365*24)+(by-dy)*6+da*30*24+dg*24))/(365*24+6));
}//((by*365*24+ba*24*30+bg*24)-((dy*365*24)+dy*6+da*30*24+dg*24))/365*24+6);
