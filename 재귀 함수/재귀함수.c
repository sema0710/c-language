#include <stdio.h>
int result = 1;
void recursive(int num){
	if(num <= 0) return; //만약 num이 0이거나 더 작으면 return해준다(끝낸다) 
	//재귀함수 쓸때는 탈출조건이 필요 
	recursive(num - 1);//이게 탈출조건을 충족시켜줌 
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
