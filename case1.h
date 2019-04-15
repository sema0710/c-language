#include <stdio.h>
void case1(int len){
	int i,j;
	for(i=0;i<=len;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n"); 
	}
}
