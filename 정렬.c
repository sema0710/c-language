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
//call by reference --> 함수의 매개변수에 주소를 주는 것
//call by value --> 함수의 매개변수에 값을 주는 것 
