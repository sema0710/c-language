#include <stdio.h>
void lotation(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("%d %d\n",*a,*b);
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	lotation(&a,&b);	
	printf("%d %d\n",a,b);
}
//call by reference --> �Լ��� �Ű������� �ּҸ� �ִ� ��
//call by value --> �Լ��� �Ű������� ���� �ִ� �� 
