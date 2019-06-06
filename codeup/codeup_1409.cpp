#include <stdio.h>
int main(){
	int number[10];
	int i,num;
	for(i=0;i<10;i++){
		scanf("%d",&number[i]);
	}
	scanf("%d",&num);
	printf("%d",number[num-1]);
}
