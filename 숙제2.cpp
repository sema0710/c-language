#include <stdio.h>
int main(){
	int arr[5] = {1,2,3,4,5};
	int *ptr = arr;
	ptr += 2;//index 2개를 넘김 
	*ptr = *ptr+3;//그 요소에 2를 더함 
	printf("%d\n",*ptr);//출력
	*(++ptr) = 20;//ptr에 1이 더해지고 = 20이  됨 
	printf("%d\n",*ptr);
	*(ptr+1) = 30;//ptr에 1을 더한 것에다가 = 30을 하는데, ptr은 안변함 
	printf("%d\n",*ptr) ;
	*(ptr++) = 40;
	printf("%d\n",*ptr);
	printf("%d\n",*(ptr-1));
} 
