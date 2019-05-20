#include <stdio.h>
int returner(int a,int b)
{
	int result;
	a == b ? result = -1 : printf("");
	a > b ? result = a : printf("");
	a < b ? result = b : printf("");
	return result;
}
int main(){
	int *a,b=10;
	printf("%p",&a);
}
