#include <stdio.h>
int main(){
	FILE *fp;
	char line[100];
	fp = fopen("test.txt","r");
	if(fp == NULL){
		printf("fail to make file or find file");
		return 0;
	}
	while(fgets(line,100,fp) != NULL){
		printf("%s",line);
	}
	fclose(fp);
	return 0;
}
