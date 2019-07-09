#include <stdio.h>

int main(){
	int input,result,i=0;
	scanf("%d",&input);
		while(input != 1){
			if((input-1) % 5 == 0){
				input--;
			}
			else if(input % 5 == 0){
				input /= 5;
			}
			else if(input % 2 == 0){
				input /= 2;
			}
			else{
				input--;
			}
			printf("%d\n",input);
			i++;
	}
	printf("%d",i);
}
