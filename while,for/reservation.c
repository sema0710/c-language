#include <stdio.h>
#include <stdlib.h>
int main(){
	char arr[9] = {'x','x','x','x','x','x','x','x','x'};
	int num[9] = {1,2,3,4,5,6,7,8,9},choice=99,i;
	while(choice != 0){
		for(i=0;i<9;i++){
			printf("%d",num[i]);
		}
		printf("\n%s\n",arr);
		printf("예약할 자리 입력: ");
		scanf("%d",&choice);
		if(choice < 0){
			choice = choice * -1;
			if(arr[choice - 1] == 'x'){
				system("cls");
				printf("예약 되지 않았음\n");
			}
			else{
				system("cls");
				printf("%d번 자리 취소되었습니다\n",choice);
				arr[choice - 1] = 'x';
			}
		}
		else if(arr[choice-1] == 'o'){
			system("cls");
			printf("예약 되었음\n");
		}
		else{
			system("cls");
			printf("%d번 자리 예약되었습니다\n",choice);
			arr[choice-1] = 'o';
		}
	}
}
