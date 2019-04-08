#include <stdio.h>
int main(){
	int a,i,j,u;
	scanf("%d",&a);
	u=a-1;
	int num1=u;
	for(i=0;i<a;i++){
		for(u=a-i-1;u>0;u--){
			printf(" ");
		}
		for(j=0;j<a;j++){
			printf("*");
		}
		printf("\n");
	}
}
