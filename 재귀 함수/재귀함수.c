#include <stdio.h>
int result = 1;
void recursive(int num){
	if(num <= 0) return; //���� num�� 0�̰ų� �� ������ return���ش�(������) 
	//����Լ� ������ Ż�������� �ʿ� 
	recursive(num - 1);//�̰� Ż�������� ���������� 
	printf("recursive call! %d\n",num);
	//MAIN --> R(3) --> R(2) --> R(1) --> R(0) --> R(1) --> R(2) --> R(3) --> MAIN
}
int factorial(int num){
	if(num <= 0)
		return result;
	result = result * num;
	factorial(num-1);
}
int main(){
	int num;
	scanf("%d",&num);
	printf("%d",factorial(num));
	return 0;
}
