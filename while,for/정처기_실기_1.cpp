#include <stdio.h>
int main(){
	int m=0,n=0,k=0,arr[6][8],i,j;
	do{
		m++;
		do{
			n = n + 1;
			k = k + 1;
			if(k > 7){
				k = 1;	
			}
			arr[m][n] = k;
		}while(n<7);
		k = m;
		n = 0;
	}while(m < 5); 
	for(i=1;i<6;i++){
		for(j=1;j<6;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
