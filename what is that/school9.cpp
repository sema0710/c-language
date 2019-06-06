#include <stdio.h>
#include <String.h>
int main(){
	char word[100]={};
	int i;
	gets(word);
	for(i=strlen(word);i>=0;i--){
		if(word[i] == NULL){
			continue;
		}
		printf("%c",word[i]);
	}
}
