	#include <stdio.h>
	void case4(int len){
		int i,j,u;
		for(i=0;i<len;i++){
			for(u=0;u<i;u++){
				printf(" ");
			}
			for(j=len;j>i;j--){
				printf("*");
			}
			printf("\n");
		}
	}
