#include <stdio.h>

int main(){
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a + b > c || a + c >  b || b + c > a){
		if(a == b && b == c){
			printf("정삼각형입니다");
		}
		else if(a == b || b == c || a == c){
			printf("이등변삼각형입니다.");
		}
		else if(a*a + b*b == c*c || c*c + b*b == a*a || b*b + a*a == b*b){
			printf("직각삼각형입니다");
		}	
		else{
			printf("삼각형입니다"); 
		}
	}
} 
