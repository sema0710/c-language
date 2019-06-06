#include <stdio.h>

int main(){
	int count=0,num,i,j,u;
	scanf("%d",&num);
	for(i=1;i<=num/3+1;i++){
		for(j=1;j<=num/3+1;j++){
			for(u=1;u<=num/3+1;u++){
				if(i+j+u == num && i <= j && j <= u && i <= u){
					count++;
				}
			}
		}
	}
	printf("%d",count);
}
