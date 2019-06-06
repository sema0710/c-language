#include <stdio.h>
int a = 0;
int Recursive(){
	printf("recursive call \n");
	if(a > 100000){
		return 0;
	}
	a++;
	printf(" %d",a);
	Recursive();
}
int main(){
	Recursive();
} 
