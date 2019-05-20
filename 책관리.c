#include <stdio.h>
#include <stdlib.h>
int main(){
	char a = 'a',i;
	for(i=0;a != '\n';i++){
		a = getchar();
	}
	printf("%d",i-1);
}
