#include <stdio.h>
int main(){
	int i,num,result=0;
	scanf("%d",&num);
	for(i = 1;i <= num;i++){
		if(num % i == 0){
			result = result + i;
		}
	}
	printf("%d",result);
}
