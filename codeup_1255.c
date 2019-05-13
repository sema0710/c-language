#include <stdio.h>
int main(){
	double num1,num2;
	scanf("%lf %lf",&num1,&num2);
	while(num1 <= num2){
		printf("%.2lf ",num1);
		num1 = num1 + 0.01;
	}
}
