#include <stdio.h>
int main(){
//	char a[] = {"hello world!"};//이 문자열의 끝에는 null 문자가 있다. 
//	printf("%d\n",sizeof(a));
//	printf("%d",a[5]);

//gets써서 입력받고 출력하기 
//char arr[10];
//int i;
//gets(&arr);//공백도 함께 입력받음 
//printf("%s\n",arr);
//for(i=0;i<10;i++){
//	printf("%c",arr[i]);
//}

//for문을 이용하여 배열의 값을 출력하기 
//char a[10];
//int i=0;
//gets(&a);
//for(i=0;i<10;i++){
//	if(a[i] != 0)printf("%c",a[i]);
//} 

//for문을 이용하여 배열의 값을 받기 
//char a[10];
//int i;
//for(i=0;i<10;i++){
//	scanf("%c",&a[i]);
//}
//printf("%s",a);

char a[100];
int i=0;
scanf("%s",&a);
printf("%s\n",a);
for(i=1;a[i] != 0;i=i+2){//이거 완전 신박한듯 
		printf("%c ",a[i]);
}
}
