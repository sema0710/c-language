#include <stdio.h>
int main(){
//	char a[] = {"hello world!"};//�� ���ڿ��� ������ null ���ڰ� �ִ�. 
//	printf("%d\n",sizeof(a));
//	printf("%d",a[5]);

//gets�Ἥ �Է¹ް� ����ϱ� 
//char arr[10];
//int i;
//gets(&arr);//���鵵 �Բ� �Է¹��� 
//printf("%s\n",arr);
//for(i=0;i<10;i++){
//	printf("%c",arr[i]);
//}

//for���� �̿��Ͽ� �迭�� ���� ����ϱ� 
//char a[10];
//int i=0;
//gets(&a);
//for(i=0;i<10;i++){
//	if(a[i] != 0)printf("%c",a[i]);
//} 

//for���� �̿��Ͽ� �迭�� ���� �ޱ� 
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
for(i=1;a[i] != 0;i=i+2){//�̰� ���� �Ź��ѵ� 
		printf("%c ",a[i]);
}
}
