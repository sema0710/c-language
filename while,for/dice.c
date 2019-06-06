#include <stdio.h>
#include <time.h>
int main(){
	int counter[6] = {0};//배열 
	int dice = 0,i,j;//난수를 담을 그릇과 for문에 쓸 변수 
	srand(time(NULL));//seed값 초기화 
	for(i=0;i<30;i++){//100번 돌리는 for문 
		dice = (rand()%6)+1;//1에서 6까지의 random값을 줌 
		switch(dice){//만약 1~6 이라면 
			case 1:
				counter[0]++;
				break;
			case 2:
				counter[1]++;
				break;
			case 3:
				counter[2]++;
				break;
			case 4:
				counter[3]++;
				break;
			case 5:
				counter[4]++;
				break;
			case 6:
				counter[5]++;
				break;
		}
	}
	for(i = 0;i<6;i++){
		printf("%d : ",i+1);
		for(j = 0;j < counter[i];j++){
			printf("*");
		}
		printf("\n");
	}
}
