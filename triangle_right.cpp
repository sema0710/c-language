#include <stdio.h>

int main(){
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a + b > c || a + c >  b || b + c > a){
		if(a == b && b == c){
			printf("���ﰢ���Դϴ�");
		}
		else if(a == b || b == c || a == c){
			printf("�̵�ﰢ���Դϴ�.");
		}
		else if(a*a + b*b == c*c || c*c + b*b == a*a || b*b + a*a == b*b){
			printf("�����ﰢ���Դϴ�");
		}	
		else{
			printf("�ﰢ���Դϴ�"); 
		}
	}
} 
