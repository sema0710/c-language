#include <stdio.h>
int main(){
	int arr1[2][3] = {{0,1},{3,4}};//�Ѻκи� �ʱ�ȭ�ϸ� �ٸ����� 0���� �ʱ�ȭ�ȴ�. 
	int arr2[2][3] = {0,1,2,3,4,5}; 
	int arr3[][3] = {0,1,2,3,4,5};
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\n",arr1[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\n",arr2[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\n",arr3[i][j]);
		}
	}
}
