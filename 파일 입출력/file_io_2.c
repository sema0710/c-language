#include <stdio.h>
#define SIZE 100
FILE *fp;
int count(char c1){
	int i,count = 0;
	char words[SIZE] = {'\0'};
	fp = fopen("word.txt","r");
	fgets(words,100,fp);
	for(i = 0;words[i] != EOF;i++){
		printf("%c",words[i]);
		if(words[i] == c1){
			count++;
		}
		else{
			continue;
		}
	}
	return count;
}
int main(){
	char input_string[SIZE] = {0,};
	int c,word_count = 0;
	fp = fopen("word.txt","a");
	printf("글자입력");
	gets(input_string);
	fputs(input_string,fp);
	fclose(fp);
	printf("\n찾고자 하는 글자 입력:");
	scanf("%c",&c);
	word_count = count(c);
	printf("%c와 일치하는 글자수 : %d",c,word_count);
	return 0;
}
