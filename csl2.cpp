#include <stdio.h>
int main(){
	int i,sum=0	,apple,student,count;
	scanf("%d",&count);
	for(i=0;i<count;i++){
		scanf("%d %d",&student,&apple);
		sum = sum+apple%student;
	}
	printf("%d",sum);
}
