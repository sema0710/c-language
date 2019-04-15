#include <stdio.h>
void case2(int len){
	int i,j;
	for(i=0;i<len;i++){
		for(j=len;j>i;j--){
			printf("*");
		}
		printf("\n");
	}
}
