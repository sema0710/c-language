#include <stdio.h>
int main(){
	int i,j;
	int place[5][6]={0};
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&place[i][j]);
			place[i][5] += place[i][j];
			printf("%d ",place[i][j]);
		}
		printf("%d",place[i][5]);
		printf("\n");
	}
}
