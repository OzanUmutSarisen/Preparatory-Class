#include<stdio.h>

int main () {
	int num;
	scanf("%d",&num);
	int ans;
	int mod=10;
	int bol=1;
	while (num>0) {
		ans=num%mod;
		num=num-ans;
		ans=ans/bol;
		mod=mod*10;
		bol=bol*10;
		printf("%d",ans);
	}
}
