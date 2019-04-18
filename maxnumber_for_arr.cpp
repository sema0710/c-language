#include <stdio.h>
int main(){
	int len,num,i,max = 0;
	scanf("%d",&len);
	int field[len]={0};
	for(i=0;i<len;i++){
		scanf("%d",&field[i]);
		if(max < field[i]){
			max = field[i];
		}
	}
	printf("%d\n",max);
}
