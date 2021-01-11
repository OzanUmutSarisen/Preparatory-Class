#include<stdio.h>

int main () {
//1. aþama bu gün tarihini ve dogum günü tarihini full al (saatlerde dahil) [alýndý]
	
	int by,ba,bg,dy,da,dg;
	int ty,ta,tg,ts,td;
	int bs,bd,ds,dd;
	printf("bulundugunuz yili yaziniz\t");
	scanf("%d",&by);
	printf("bulundugunuz ayi yaziniz\t");
	scanf("%d",&ba);
	printf("bulundugunuz gunu yaziniz\t");
	scanf("%d",&bg);
	printf("bulundugunuz saati sonra dk yi yaziniz(aralarda entira tiklayiniz)\t");
	scanf("%d",&bs);
	scanf("%d",&bd);
	printf("dogdunuz yili yaziniz\t");
	scanf("%d",&dy);
	printf("dogdunuz ayi yaziniz\t");
	scanf("%d",&da);
	printf("dogdunuz gunu yaziniz\t");
	scanf("%d",&dg);
	printf("dogdugunuz saati sonra dk yi yaziniz(aralarda entira tiklayiniz)\t");
	scanf("%d",&ds);
	scanf("%d",&dd);
	if (bd<dd){
		bd=bd+60;
		bs=bs-1;
		td=bd-dd;
	}
	else 
		td=bd-dd;
	if(bs<ds){
		bs=bs+24;
		bg=bg-1;
		ts=bs-ds;
	}
	else 
		ts=bs-ds;
	if (dg>bg) {
		if (ba==1 || ba==3 || ba==5 || ba==7 || ba==8 || ba==10 || ba==12) {
			bg=bg+31;
			tg=bg-dg;
			ba=ba-1;
		}
		else if (ba==4||ba==6||ba==9||ba==11) {
			bg=bg+30;
			tg=bg-dg;
			ba=ba-1;
		}	
		else if(ba==2&&by/4==0) {
			bg=bg+29;
			tg=bg-dg;
			ba=ba-1;
		}
		else if(ba==2&&by/4!=0){
			bg=bg+28;
			tg=bg-dg;
			ba=ba-1;
		}
	}
	else {
		
		tg=bg-dg;
		}	
		
	if (da>ba){
		ba=ba+12;
		ta=ba-da;
		by=by-1;
	}
	else {
		ta=ba-da;
	}
	ty=by-dy;
	printf("\n%d yildir %d ay %d gun %d saat %d dakika",ty,ta,tg,ts,td);
	printf("\n\t\tYasiyorsunuz");
}
