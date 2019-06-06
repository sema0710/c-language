#include <stdio.h>
int main(){
	int gender=0,grade=0,i=0,person=0,maxper=0,room=0,j=0;
	scanf("%d %d",&person,&maxper);
	int counter[12]={0,0,0,0,0,0,0,0,0,0,0,0};
	for(i=0;i<person;i++){
		scanf("%d %d",&gender,&grade);
		switch(gender){
			case 1:
				switch(grade){
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
					default:
						break;
				}
				break;
			case 0:
				switch(grade){
					case 1:
						counter[6]++;
						break;
					case 2:
						counter[7]++;
						break;
					case 3:
						counter[8]++;
						break;
					case 4:
						counter[9]++;
						break;
					case 5:
						counter[10]++;
						break;
					case 6:
						counter[11]++;
						break;
					default:
						break;
				}
				break;
		}
	}
	for(i=0;i<12;i++){
		if(counter[i]%maxper == 0){
			room = counter[i]/maxper+room;
		}
		else{
			room = counter[i]/maxper+1+room;
		}
	}
	printf("%d\n",room);
}
