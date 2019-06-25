#include <stdio.h>
int f(int n){
	int result = 0;
	if(n == 1) return n;
	else return f(n-1)+n;
}
int main(){
	int n = 20;
	printf("%d\n",f(n));
}
