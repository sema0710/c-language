#include <stdio.h>
int main(){
	int subject[6] = {0};
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&subject[i]);
		subject[5] = subject[5] + subject[i];
	}
	printf("%d",subject[5]);
}
