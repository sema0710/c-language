#include <stdio.h>
int jinsu1,jinsu2,result;
char input[17];

char toint(char ch)
{
	if(ch < 'A'){
		return ch - '0';
	}
	else if(ch > 'A'){
		return ch - 'A' + 10;
	}
}

int toten(){
	int i;
	for(i=0;input[i];i++){
		result = result * jinsu1 + toint(input[i]);
	}
	return result;
}
void toano(){
	int re;
	re = result % jinsu2;
	result /= jinsu2;
	if(result > 0){
		toano();
	}
	if(re < 10){
		printf("%d",re);
	}
	else{
		printf("%c", -10 + re + 'A');
	}
}
int error(){
	int i = 0;
	for(i=0;input[i];i++){
		if(jinsu1 == 2 && (input[i] != '1' && input[i] != '0')){
			return 1;
		}
	}
	for(i=0;input[i];i++){
	if(result < 0 || 65535 < result || toint(input[i]) < 0 || jinsu1 <= toint(input[i])){
		return 1; 
	}
	else if(jinsu1 != 2 && jinsu1 != 8 && jinsu1 != 10 && jinsu1 != 16){
		return 1;
	} 
	else if(jinsu2 != 2 && jinsu2 != 8 && jinsu2 != 10 && jinsu2 != 16){
		return 1;
	}
	else{
		return 0;
	}
}
}
int main(){
	printf("변환할 숫자를 입력하세요 : ");
	scanf("%s",input);
	printf("현재 진수와 바꿀 진수를 입력하세요 : ");
	scanf("%d %d",&jinsu1,&jinsu2);
	toten();
	if(error() == 1){
		puts("error");
		return 0;
	}
	toano();
} 
