#include <stdio.h>
int add(int a,int b);
int min(int a,int b);
int mul(int a,int b);
int nanugi(int a,int b);
int main(){
	int a,b; 
	scanf("%d %d",&a,&b);
	printf("%d\n",add(a,b));
	printf("%d\n",min(a,b));
	printf("%d\n",mul(a,b));;
	printf("%d\n",nanugi(a,b));
}
int add(int a,int b)
{
	return a+b;
}
int min(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int nanugi(int a,int b){
	return a/b;
}
