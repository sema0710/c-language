#include <stdio.h>
int main(){
	int a,b,c,time,i,j,u;
	scanf("%d",&time);
	for(i=0;i<=time/300;i++){
		for(j=0;j<=time%300/60;j++){
			for(u=0;u<=time%60/10;u++){
				a=i;
				b=j;
				c=u;
			}
		}
	}
	printf("%d %d %d",i-1,j-1,u-1);
}
