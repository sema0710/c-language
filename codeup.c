#include <stdio.h>
int main(){
	int len,i,j,count=1;
	scanf("%d",&len);
	int field[len][len];
	for(i=0;i<len;i++){
		for(j=len-1;j>=0;j--){
			field[j][i] = count;
			count++;
		}
	}
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			printf("%d ",field[i][j]);
		}
		printf("\n");
	}
}
