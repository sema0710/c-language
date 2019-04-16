#include <stdio.h>
int main(){
	int score1,score2;
	scanf("%d %d",&score1,&score2);
	if(score1 > 60){
		if(score2 > 60){
			printf("합격");
		}
		else{
			printf("불합격");
		}
	}
	else{
		printf("불합격");
	} 
}
