#include<stdio.h>

int main () {
	/*int a,b,c; 
			
	while (a,b,c!=EOF){
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		if (a>b&&a>c)
			printf("\n\t%d\n",a);
		else if (b>a&&b>c)
			printf("\n\t%d\n",b);
		else if (c>a&&c>b)
			printf("\n\t%d\n",c);
	}*/
	
	int eb=0;
	int i=0;
	int g;
	while (eb!=EOF&&i<10&&g!=-5) {
		
		scanf("%d",&g);
		if(g>eb)
			eb=g;
		i++;			
	}
	printf ("\n\t%d",eb);
}
