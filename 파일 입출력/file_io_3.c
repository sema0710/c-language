#include <stdio.h>

int main(){
	FILE *fp = fopen("asdf.txt","w");
	// ���� ���� --> ���� r,w,a�� �ִµ� r�� read,w�� write,a�� append�̴�. 
	fprintf(fp,"%s","asdf");
	//fprintf�� ���� ���Ͽ� �ִ´�. 
	//file�� ���ڿ��� �ִµ� ���ڿ��� "asdf"�� �ִ´�.
	//fprintf(file pointer,"����������",��);
	char a[10];
	fscanf(fp,"%s",&a);
	printf("%s",a);  
}
