#include <stdio.h>
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d",*arr);//�迭 �̸� : �迭�� ù��° ��Ҹ� ����Ű�� �����ʹ�.
	printf("\n%p\n%p\n%p",&arr[0],&arr[1],&arr[2]);//int�� �迭�� 4byte�� ���̳���.
	int *ptr = arr;
	printf("\n%d",ptr[1]); 
}
