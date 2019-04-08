#include <stdio.h>
int main(){
	int oddresult=0,evenresult=0;
	for(int i=1;i <=100;i++){
//		if(i % 2 == 0){//if~else문 사용한거  
//			evenresult+=i;
//		}
//		else{
//			oddresult+=i;
//		}
	(i%2==0)?(evenresult+=i):(oddresult+=i);//3항연산자 사용한거 
	}
	printf("%d %d",evenresult,oddresult);
	}
//양수 음수 0 인지 확인 
//	int a=0;
//	scanf("%d",&a); 
//	if(a > 0){printf("양수");}
//	if(a < 0){printf("음수");}
//	if(a == 0){printf("0");}
//3과 4의 배수 
//int i=0;
//for(int i=1;i<=100;i++){
//	if(i%3 == 0||i%4==0){
//	printf("%d\n",i);
//} 
//}
//양수인지 음수인지 구하기  
//int a=0;
//scanf("%d",&a);
//if(a > 0){
//	printf("양수");
//}
//else if(a < 0){
//	printf("음수");
//} 
//else{
//	printf("0");
//}
//a~f 등급 구하기 
//int num=0;
//scanf("%d",&num);
//if(num >= 90){printf("a");}
//else if(num >= 80 && num < 90){printf("b");}
//else if(num >= 70 && num < 80){printf("c");}
//else if(num >= 60 && num < 70){printf("d");}
//else{printf("f");}
//return 0;	
//1~100까지 더하기 
//int result = 0;
//for(int i=1;i<=100;i++)
//result += i;
//printf("%d",result);
// 3의 배수 
//for(int i=1;i<=100;i++){
//		if(i % 3 == 0){
//			printf("%d ",i);
//		}
//} 
/*

*/

