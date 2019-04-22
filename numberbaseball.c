#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int input,i,j,strike=0,ball=0;
	int place[3] = {0};
		place[0] = rand()%9;
		place[1] = rand()%9;
		place[2] = rand()%9;
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
			if(i == j){
				continue;
			}
			if(place[i] == place[j]){
				place[j] = rand()%9;
			}
		}
	}
	printf("%d %d %d\n",place[0],place[1],place[2]);
while(1){
	int player[3];
	scanf("%d %d %d",&player[0],&player[1],&player[2]);
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(player[i] == place[j]){
				if(i == j){
					strike++;
					continue;
				}
				ball++;
			}
		}
	}
	
	if(strike == 3){
		printf("you win");
		return 0;
	}
	
	printf("%dS %dB",strike,ball);
	strike = 0;
	ball = 0;
}
}
