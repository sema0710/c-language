#include <stdio.h> 
#include "case1.h"
#include "case2.h"
#include "case3.h"
#include "case4.h" 
int main(){
	int num,len;
	printf("번호 : ");
	scanf("%d",&num);
	printf("줄의개수  : ");
	scanf("%d",&len);
	switch(num){
		case 1:
			case1(len);
			break;
		case 2:
			case2(len);
			break;
		case 3:
			case3(len);
			break;
		case 4:
			case4(len);
			break;
	} 
}
// 배열을 사용해서 몇번 입력받을 지 정하고 그 횟수만큼 입력 하고 다 더해서 출력  
//	int i,sum = 0,len;
//	scanf("%d",&len); 
//	int arr[len];
//	for(i=0;i<len;i++){
//		printf("정수%d : ",i+1);
//		scanf("%d",&arr[i]);
//		sum = sum + arr[i];
//	}
//	printf("%d",sum);

//배열을 이용한 구구단 
//	int tabel[9][9];
//	int i,j;
//	for(i=0;i<9;i++){
//		for(j=0;j<9;j++){
//			tabel[i][j] = (i+1) * (j+1); 
//		}
//	}
//	for(i=0;i<9;i++){
//	for(j=0;j<9;j++){
//		printf("%d ",tabel[i][j]);
//		}
//		printf("\n");
//	}
