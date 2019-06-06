#include <stdio.h>
int main(){
	int now,before,later;
	scanf("%d %d",&now,&before);
	for(;later < 100;){
		later = now + before;
		if(later > 100){
			break;
		}
		printf("%d ",later);
		before = now;
		now = later;
	}
}
