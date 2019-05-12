#include <stdio.h>
int printer(int printed[16]){
	int i=0;
	for(i=0;i<16;i++){
		if(printed[i] == 0){
			continue;
		}
		else{
			printf("%d",printed[i]);
		}
	}
}
