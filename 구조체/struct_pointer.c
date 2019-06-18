#include <stdio.h>
struct member{
	int x;
	int y;
};
int main(){
	struct member test;
	struct member *p;
	p = &test;
	scanf("%d",&(*p).x);
	scanf("%d",&p->y);
	printf("%d",(*p).x);
	printf("%d",p->y);
} 
