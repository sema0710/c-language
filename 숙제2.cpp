#include <stdio.h>
int main(){
	int arr[5] = {1,2,3,4,5};
	int *ptr = arr;
	ptr += 2;//index 2���� �ѱ� 
	*ptr = *ptr+3;//�� ��ҿ� 2�� ���� 
	printf("%d\n",*ptr);//���
	*(++ptr) = 20;//ptr�� 1�� �������� = 20��  �� 
	printf("%d\n",*ptr);
	*(ptr+1) = 30;//ptr�� 1�� ���� �Ϳ��ٰ� = 30�� �ϴµ�, ptr�� �Ⱥ��� 
	printf("%d\n",*ptr) ;
	*(ptr++) = 40;
	printf("%d\n",*ptr);
	printf("%d\n",*(ptr-1));
} 
