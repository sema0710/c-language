#include <stdio.h>
#include <math.h>
#include <String.h>
int ano_to_ten(int jinsu1,char arr[]){
	int i,integer,result = 0,count = 0;
	for(i=strlen(arr);i>=0;i--){
		if(arr[i] == NULL){
			continue;
		}
		else if((int)arr[i] > 90){
			integer = (int)arr[i] - 87;
		}
		else{
			integer = (int)arr[i] - 48;
		}
		if(i == strlen(arr)){
			result = integer * 1 + result;
			continue;
		}
		result = integer * pow(jinsu1,count) + result;
		count++;
	}
	return result;
}
int main(){
	int jinsu1,jinsu2,i,j=0,result;
	char arr[] = {};
	printf("���� ������ ��ȯ�� ������ �Է��ϼ���");
	scanf("%d %d",&jinsu1,&jinsu2);
	printf("���ڸ� �Է��ϼ���");
	scanf("%s",&arr);
	switch(jinsu1){
		case 2:
			result = ano_to_ten(jinsu1,arr);
			printf("%d",result);
			break;
		case 8:
			result = ano_to_ten(jinsu1,arr);
			printf("%d",result);
			break;
		case 16:
			result = ano_to_ten(jinsu1,arr);
			printf("%d",result);
			break;
	}
}
