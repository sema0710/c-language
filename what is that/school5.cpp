#include <stdio.h>
int main(){
//	int a,i,j,u;
//	scanf("%d",&a);
//	u=a-1;
//	int num1=u;
//	for(i=0;i<a;i++){
//		for(u=a-i-1;u>0;u--){
//			printf(" ");
//		}
//		for(j=0;j<a;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
int a;
scanf("%d",&a);
if(a % 2 == 0){
	if(a % 4 != 0){
		printf("a");
	}
	else if(a % 4 == 0){
		printf("b");
	}
}
else{
	printf("c");
}
//int a;
//scanf("%d",&a);
//a % 2 == 0 ? (a % 4== 0 ? printf("b") : printf("a")) : printf("c");
//int a,b,c;
//scanf("%d %d %d",&a,&b,&c);
//if(a<b){
//	if(a<c){
//		printf("%d",a);
//	}
//	else if(c<a){
//		printf("%d",c);
//	}
//if(a>b){
//	if(b<c){
//		printf("%d",b);
//	}
//	else if(c<b){
//		printf("%d",c);
//	}
//}
//if()
//}
}
