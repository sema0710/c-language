#include <stdio.h>
#include <time.h>
int main(){
	int counter[6] = {0};//�迭 
	int dice = 0,i,j;//������ ���� �׸��� for���� �� ���� 
	srand(time(NULL));//seed�� �ʱ�ȭ 
	for(i=0;i<30;i++){//100�� ������ for�� 
		dice = (rand()%6)+1;//1���� 6������ random���� �� 
		switch(dice){//���� 1~6 �̶�� 
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
