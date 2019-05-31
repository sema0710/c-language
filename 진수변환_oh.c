#include <stdio.h>
int jinsu1,jinsu2,result;
char input[17];

char toint(char ch)
{
	if(ch < 'A'){
		return ch - '0';
	}
	else{
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
	if(re < '10'){
		printf("%d",re);
	}
	else{
		printf("%c", -10 + re + 'A');
	}
}
int error(){
	int i = 0;
	for(i=0;input[i];i++)
	if(input[i] || result < 0 || 65535 < result || toint(input[i]) < 0 || jinsu1 <= toint(input[i])){
		return 0;
	}
	return 1;
}
int main(){
	scanf("%s",input);
	scanf("%d %d",&jinsu1,&jinsu2);
	toten();
	if(!error()){
		puts("error");
		return 0;
	}
	toano();
} 
