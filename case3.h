#include <stdio.h>
void case3(int len){
	int i,j,u;
	for(i=0;i<len;i++){
		for(u=len-1;u>i;u--){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
