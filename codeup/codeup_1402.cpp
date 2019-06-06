#include <stdio.h>
int main(){
	int i,len;
	scanf("%d",&len);
	int num[len];
	for(i=0;i<len;i++){
		scanf("%d",&num[i]);
	}
	for(i=len;i>0;i--){
		printf("%d ",num[i-1]);
	}
}
