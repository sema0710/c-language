#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int i,j,h;
	printf("숫자 몇개를 출력시킬 지 정하세요 ^^7 \n");
	scanf("%d",&j);
	printf("N을 입력하세요 ^^7\n");
	scanf("%d",&h);
	int arr[j+h],answer[j-h];
	for(i=0;i<j;i++){
		arr[i] = (rand()%5)+1;
		printf("%d",arr[i]);
	}
	printf("\n\n\n");
	for(i=0;i<j-h;i++){
		arr[i+j] = (rand()%5)+1;
		printf("%d : ",arr[i+j]);
		scanf("%d",&answer[i]);
	}
	for(i=0;i<j-h;i++){
		printf("원래 값 : %d N_trase한 값 : %d\n",arr[j-h+i+1]);
	}
}
