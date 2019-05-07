#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define  
int main(){
	srand(time(NULL));
	float front,back,i;
	for(i=0;i<10000;i++){
		if(rand()%2 == 0){
			front++;
		}
		else{
			back++;
		}
	}
	printf("%lf\n%lf\n%.2lf\n%.2lf\n",front,back,(float)front/100.0,(float)back/100.0);
}
