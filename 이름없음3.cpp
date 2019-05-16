#include <stdio.h>
int main(){
	int arr1[5];
	int *ptr1;
	double arr2[5];
	double *ptr2;
	int a = 1;
	printf("%p %p\n",&a,ptr2);
	ptr1++;
	ptr2++;
	printf("%p %p\n",ptr1,ptr2);
}
