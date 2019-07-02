#include <stdio.h>
struct hello{
	int a;
	char b[10];
	int num;
};
struct hi{
	char name[10];
} hi;
int add(int a,int b){//함수 
	return a+b;
}
int factorial(int a){//재귀함수 
	if(a <= 0){
		return 1;
	}
	return a * factorial(a-1);
}
int asdf = 0;
int main(){
	char what[10] = {};
	struct hello hello[10];
	hello[0].a = 0;
	strcpy(hi.name,"asdf");
	strcpy(hello[0].b,"asdf");
	int score[10] = {1,2,3,4,5};// array
	int asdf = 1;
	int *p;//pointer
	int a = 10;
	p = &a;
	printf("%d\n",*p);
	p = score;
	printf("%d\n",*p);
	p = p + 1;
	printf("%d\n",*p);
	p = p + 1;
	*p = add(1,5);
	printf("%d\n",*p);
	printf("%d\n",asdf);
	printf("%d\n",factorial(5));
	printf("%s\n",hello[0].b);
	printf("%s\n",hi.name);
	FILE *test = fopen("f1.txt","w");
	fprintf(test,"%s","asdf");
	fscanf(test,"%s",what);
	printf("%s",what);
}
