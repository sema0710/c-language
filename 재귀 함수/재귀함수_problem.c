#include <stdio.h>a


//1번 문제 자기이름 10번 출력하기 

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

//2번문제 recursive 자연수 받아 그 수만큼 출력하기 

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

//3번 문제 자연수 n을 받아서 재귀함수로 1부터 n까지 출력하는 코드

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

//4번문제 n을 입력받아 재귀함수를 이용하여 n부터 1까지의 정수를 차례대로 출력하는 코드

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

//문제 5번 재귀함수를 이용해 팩토리얼 구현

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

//6번문제 자연수 n을 받아서 1부터 n까지 합 구하기 

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

//7번 문제 자연수 n을 입력받아 재귀함수를 이용해 피보나치 수열에서 n번째 수를 출력하는 작성하시오

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

//8번 문제 n번째 수는 n/2번째 수 + n - 1번째 수인 수열을 구현하라

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

//9번 문제 9자리 이하의 자연수를 입력받아서 재귀함수를 이용하여 자리수를 더하여라

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
