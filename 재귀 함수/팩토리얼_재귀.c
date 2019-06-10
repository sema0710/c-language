#include <stdio.h>
int result = 1;
int factorial(int num){
	if(num <= 0)
		return result;
	result = result * num;
	factorial(num-1);
}



int dbqls(int num){
	if(num <= 1)
	{
		return 1;
	}
	return num * dbqls(num - 1);
}


int main(){
	int num;
	scanf("%d",&num);
	printf("%d\n",factorial(num));
	printf("%d\n",dbqls(num));
}
