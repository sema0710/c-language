#include <stdio.h>
int main(){
	int len,max=0,min=100000000,i;
	scanf("%d",&len);
	int score[len];
	for(i=0;i<len;i++){
		scanf("%d",&score[i]);
		max == score[i] || min == score[i] ? printf("") : printf("");
		max < score[i] ? max = score[i] : max = max;
		min > score[i] ? min = score[i] : min = min;
	}
	printf("%d",max-min);
}
