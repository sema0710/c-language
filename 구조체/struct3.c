#include <stdio.h>
#include <stdio.h>

struct person{
	char name[20];
	int age;
};

int main(){
	struct person ps1;
	strcpy(ps1.name,"hello world!");
	ps1.age = 17;
}
