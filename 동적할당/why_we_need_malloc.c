#include <stdio.h>

char name[30];
char *username(){
	printf("what's your name : ");
	gets(name);
	return name;
}
int main(){
	char * name1;
	char * name2;
	name1=username();
	printf("%s\n",name1);
	name2=username();
	printf("%s\n",name2);
	return 0;
	//이 코드들은 에러가 난다 2말이야 
}
