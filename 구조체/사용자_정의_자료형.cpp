//사용자 정의 자료형
#include <stdio.h>
typedef struct{
	int x;
	int y;
	char a[10];	
}point;
int main(){
	point pt1 = {1,2,"asdf"};
	printf("%d %d %s",pt1.x,pt1.y,pt1.a);	
}
 
