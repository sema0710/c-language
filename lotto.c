#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int i,random,j,count=0;
	char yes_or_no;
	int lotto[6] ={0};
	srand(time(NULL));
	while(1) {
	system("cls");
	for(i=0;i<6;i++){
		gogo:
		random = (rand()%45)+1;
		for(j=0;j<6;j++){
			if(lotto[j] == random){
				count++;
				goto gogo;
			}
		}
		lotto[i] = random;
	}
	for(i=0;i<6;i++){
		printf("%d ",lotto[i]);
	}
	printf("\nexit? y/n\n");
	yes_or_no = getch();
	if(yes_or_no == 'y'){
		printf("%d",count);
		return 0;0
	}
	else{
		continue;
	}
}
}
