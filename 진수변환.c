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
char ten_to_ano(int jinsu2,char arr[]){
		int i,result = 0,count = 0,integer;
	for(i = 0;i<strlen(arr);i++){
		integer += pow(10,i) * ((int)arr[i] - 48);
	}
	char arr2[strlen(arr)];
	for(i=strlen(arr);i>=0;i--){
		arr2[i] = integer % jinsu2;
		integer /= jinsu2;
	}
	return arr2;
}
int main(){
	int jinsu1,jinsu2,i,j=0,result;
	char result2[] = {};
	char arr[] = {};
	printf("현재 진수와 변환할 진수를 입력하세요");
	scanf("%d %d",&jinsu1,&jinsu2);
	printf("숫자를 입력하세요");
	scanf("%s",&arr);
	switch(jinsu1){
		case 2:
			switch(jinsu2){
				case 10:
					result = ano_to_ten(jinsu1,arr);
					break;
				case 16:
					result = ano_to_ten(jinsu1,arr);
					break;
				case 8:
					break;
			}
			printf("%d",result);
			break;
		case 8:
			switch(jinsu2){
				case 10:
					break;
				case 16:
					break;
				case 2:
					break;
			}
			result = ano_to_ten(jinsu1,arr);
			printf("%d",result);
			break;
		case 16:
			switch(jinsu2){
				case 10:
					break;
				case 2:
					break;
				case 8:
					break;
			}
		case 10:
				switch(jinsu2){
					case 2:
						ten_to_ano(jinsu2,arr);
						break;
					case 16:
						break;
					case 8:
						break;
			}
			result = ano_to_ten(jinsu1,arr);
			printf("%d",result);
			break;
	}
	
}
