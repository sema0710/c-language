#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	a=89-a;
	printf("%d",a/5 + b + 1);
//	int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	a >= b && c >= a || b >= a && a >= c ? printf("%d",a):printf("");
//	a == b || a == c || b == c? printf("\b") : printf("");
//	c >= b && b >= a || a >= b && b >= c ? printf("%d",b):printf("");
//	a == b || a == c || b == c? printf("\b") : printf("");
//	a >= c && c >= b || b >= c && c >= a ? printf("%d",c):printf("");
//	a == b || a == c || b == c? printf("\b") : printf("");
//	int year,month,day,result;
//	scanf("%d %d %d",&year,&month,&day);
//	result=year+month+day;
//	result/=100;
//	if(result % 2 == 0){
//		printf("���");
//	}
//	else{
//		printf("�׷�����");
//	} 
//	int a=0;
//	int i=2;
//	scanf("%d",&a);
//	for(i;i < a;i++){
//		if(a%i==0){
//			printf("not prime");
//			goto end;
//		}
//	}
//	printf("prime");
//	end:;
//	int num=0;
//	int i=1;
//	scanf("%d",&num);
//	for(;i<=num;i++){
//		if(num%i==0){
//			printf("%d\n",i);
//		}
//	}
//	int a=0;
//	printf("����� ������� ����Դϱ�?");
//	printf("1.�ѱ� 2.�߱� 3.�Ϻ� 4.�̱�");
//	scanf("%d",a);
//	if(a == 1){
//		goto one;
//	} 
//	else if(a == 2){
//		goto two;
//	}
//	else if(a == 3){
//		goto three;
//	}
//	else if(a == 4){
//		goto four;
//	}
//	one: printf("�ѱ����̱���!");
//	two: printf("�߱����̱���");
//	three:;
//	four:;
//	int a=0;
//	while(a < 100){
//		a++;
//		if(a%2==0 || a%3==0){
//			continue;
//		}
//		printf("%d\n",a);
//	}
//		int num=0,sum=0,bound;
//		scanf("%d",&bound);
//		while(1){
//			if(sum>bound) break;
//			sum+=num;
//			num++;
//		}
//		printf("%d",num-1);
}
