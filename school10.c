#include <stdio.h> 
#include "case1.h"
#include "case2.h"
#include "case3.h"
#include "case4.h" 
int main(){
	int num,len;
	printf("��ȣ : ");
	scanf("%d",&num);
	printf("���ǰ���  : ");
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
// �迭�� ����ؼ� ��� �Է¹��� �� ���ϰ� �� Ƚ����ŭ �Է� �ϰ� �� ���ؼ� ���  
//	int i,sum = 0,len;
//	scanf("%d",&len); 
//	int arr[len];
//	for(i=0;i<len;i++){
//		printf("����%d : ",i+1);
//		scanf("%d",&arr[i]);
//		sum = sum + arr[i];
//	}
//	printf("%d",sum);

//�迭�� �̿��� ������ 
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
