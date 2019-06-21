#include <stdio.h>
#include <stdlib.h>
struct test{
	int a;
	int b;
};
int main(){
	int *ptr = malloc(4);
	struct test *t = malloc(sizeof(struct test));
	scanf("%d",ptr);
	printf("%d",*ptr);
	scanf("%d",t->a);
	scanf("%d",t->b);
	printf("%d",(t->a));
	printf("%d",(t->b));
	free(ptr);
	free(t);
}
