#include <stdio.h>
int main(){
	int score[10] = {1,2,3,4,5};// array
	int *p;//pointer
	int a = 10;
	p = &a;
	printf("%d\n",*p);
	p = score;
	printf("%d\n",*p);
	p = p + 1;
	printf("%d\n",*p);
}
