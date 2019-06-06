#include <stdio.h>
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d",*arr);//배열 이름 : 배열의 첫번째 요소를 가리키는 포인터다.
	printf("\n%p\n%p\n%p",&arr[0],&arr[1],&arr[2]);//int형 배열은 4byte씩 차이난다.
	int *ptr = arr;
	printf("\n%d",ptr[1]); 
}
