#include <stdio.h>a


//1�� ���� �ڱ��̸� 10�� ����ϱ� 

//int name(int i)
//{
//	if(i <= 10)
//	{
//		printf("ohjunsang\n");
//		name(i+1);
//	}
//	return 0;
//}
//int main()
//{
//	name(1);
//}

//2������ recursive �ڿ��� �޾� �� ����ŭ ����ϱ� 

//int name(int i)
//{
//	if(i > 0)
//	{
//		printf("recursive\n");
//		name(i-1);
//	}
//	return 0;
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	name(num);
//}

//3�� ���� �ڿ��� n�� �޾Ƽ� ����Լ��� 1���� n���� ����ϴ� �ڵ�

//int name(int i,int j)
//{
//	if(j <= i)
//	{
//		printf("%d\n",j);
//		name(i,j+1);
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	scanf("%d",&i);
//	name(i,1);
//} 

//4������ n�� �Է¹޾� ����Լ��� �̿��Ͽ� n���� 1������ ������ ���ʴ�� ����ϴ� �ڵ�

//int name(int i)
//{
//	if(i > 0)
//	{
//		printf("%d\n",i);
//		name(i-1);
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	scanf("%d",&i);
//	name(i);
//} 

//���� 5�� ����Լ��� �̿��� ���丮�� ����

//int sum=1;
//int name(int i,int j)
//{
//	if(j <= i)
//	{
//		sum = sum * j;
//		name(i,j+1);
//	}
//	return sum;
//}
//int main()
//{
//	int i;
//	scanf("%d",&i);
//	printf("%d",name(i,1));
//}

//6������ �ڿ��� n�� �޾Ƽ� 1���� n���� �� ���ϱ� 

//int sum=0; 
//int name(int i,int j)
//{
//	if(j <= i)
//	{
//		sum=sum+j;
//		name(i,j+1);
//	}
//	return sum;
//}
//int main()
//{
//	int i;
//	scanf("%d",&i);
//	printf("%d",name(i,1));
//} 

//7�� ���� �ڿ��� n�� �Է¹޾� ����Լ��� �̿��� �Ǻ���ġ �������� n��° ���� ����ϴ� �ۼ��Ͻÿ�

//int goal,count,sum;
//int su(int i,int j)
//{
//	if(goal > count+2){
//	count++;
//	su(j,i+j);	
//	}
//	else{
//		sum = j;
//	}
//	return sum;
//}
//int main()
//{
//	scanf("%d",&goal);
//	printf("%d",su(1,1));	
//}

//8�� ���� n��° ���� n/2��° �� + n - 1��° ���� ������ �����϶�

//int func(int i){
//	if(i == 1 || i == 0){
//		return i;
//	}
//	return func(i/2)+func(i-1);
//}   
//int main(){
//	int i;
//	scanf("%d",&i);
//	printf("%d",func(i));
//}

//9�� ���� 9�ڸ� ������ �ڿ����� �Է¹޾Ƽ� ����Լ��� �̿��Ͽ� �ڸ����� ���Ͽ���

int func(int i,int sum){
	if(i < 1){
		return sum;
	}
	func(i/10,sum+i%10);
}
int main(){
	int i;
	scanf("%d",&i);
	printf("%d",func(i,0));
} 
