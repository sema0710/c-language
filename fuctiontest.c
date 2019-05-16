#include <stdio.h>

int main(){

 int num1,num2,result;

 result = add(num1,num2);

 printf("%d",result);

}

int add(int a,int b){//함수가 main보다 밑에 있으면 c언어는 절차지향 언어이기 때문에 밑에서 에러남

 return a+b;

}
