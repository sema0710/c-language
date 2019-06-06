#include <stdio.h>
int main(){
	int i , arr[10] = {},*adress1,*adress2,max=0,min=100;
	for(i = 0; i < 10; i++){
		scanf("%d",&arr[i]);
	}
	for(i = 0;i < 10; i++){
		adress1 = &arr[i];
		adress2 = &max;
		if(*adress1 > *adress2){
			*adress2 = *adress1;
		}
		adress2 = &min;
		if(*adress1 < *adress2){
			*adress2 = *adress1;
		}
	}
	printf("%d %d",max,min);
}
