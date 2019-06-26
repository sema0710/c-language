#include <stdio.h>

int main(){
	FILE *fp = fopen("asdf.txt","w");
	// 파일 만듬 --> 모드는 r,w,a가 있는데 r은 read,w는 write,a는 append이다. 
	fprintf(fp,"%s","asdf");
	//fprintf는 값을 파일에 넣는다. 
	//file에 문자열을 넣는데 문자열은 "asdf"을 넣는다.
	//fprintf(file pointer,"서식지정자",값);
	char a[10];
	fscanf(fp,"%s",&a);
	printf("%s",a);  
}
