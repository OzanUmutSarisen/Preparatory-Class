#include<stdio.h>

int main () {
	int bugunyil,dogumyil,bugunay,dogumay,bugungun,dogumgun;
	printf("lutfen bulungunuz yili yaziniz\n\t");
	scanf("%d",&bugunyil);
	printf("lutfen dogum yilinizi yaziniz\n\t");
	scanf("%d",&dogumyil);
	printf("lutfen kacinci ayda bulundugunuzu yaziniz\n\t");
	scanf("%d",&bugunay);
	printf("lutfen kacinci ayda dogdunuzu yaziniz\n\t");
	scanf("%d",&dogumay);
	printf("lutfen ayin kacinci gununde bulundugunuzu yaziniz\n\t");
	scanf("%d",&bugungun);
	printf("lutfen ayin kacinci gununde dogdunuzu yaziniz\n\t");
	scanf("%d",&dogumgun);
	printf("%d",((bugunyil*365+bugunay*30+bugungun)-(dogumyil*365+dogumay*30+dogumgun))/365);
	
}
