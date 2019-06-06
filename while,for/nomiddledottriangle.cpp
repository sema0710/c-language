#include <stdio.h>
int main(){
//»ï°¢Çü Áß¾Ó »©±â
int i,j,h,w;
scanf("%d %d",&h,&w);
for(i=1;i<=h;i++){
	for(j=1;j<=i;j++){
		if(i==h/2+1 && j==w/2+1){
			printf(" ");
			continue;
		}
		printf("*");
	}
	printf("\n");
} 
}
