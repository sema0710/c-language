#include <stdio.h>
int main(){
	while(1){
	int num1,num2,result=0;
	printf("��1:");
	scanf("%d",&num1);
	if(num1 < 0) break;
	printf("��2:"); 
	scanf("%d",&num2);
	for(;num1<=num2;num1++){
		result+=num1;
	}
	printf("%d\n",result);
	}
}
//��� ���� 0 ���� Ȯ�� 
//	int a=0;
//	scanf("%d",&a); 
//	if(a > 0){printf("���");}
//	if(a < 0){printf("����");}
//	if(a == 0){printf("0");}
//3�� 4�� ��� 
//int i=0;
//for(int i=1;i<=100;i++){
//	if(i%3 == 0||i%4==0){
//	printf("%d\n",i);
//} 
//}
//������� �������� ���ϱ�  
//int a=0;
//scanf("%d",&a);
//if(a > 0){
//	printf("���");
//}
//else if(a < 0){
//	printf("����");
//} 
//else{
//	printf("0");
//}
//a~f ��� ���ϱ� 
//int num=0;
//scanf("%d",&num);
//if(num >= 90){printf("a");}
//else if(num >= 80 && num < 90){printf("b");}
//else if(num >= 70 && num < 80){printf("c");}
//else if(num >= 60 && num < 70){printf("d");}
//else{printf("f");}
//return 0;	
//1~100���� ���ϱ� 
//int result = 0;
//for(int i=1;i<=100;i++)
//result += i;
//printf("%d",result);
// 3�� ��� 
//for(int i=1;i<=100;i++){
//		if(i % 3 == 0){
//			printf("%d ",i);
//		}
//} 

//		if(i % 2 == 0){//if~else�� ����Ѱ�  
//			evenresult+=i;
//		}
//		else{
//			oddresult+=i;
//		}

//	int oddresult=0,evenresult=0;
//	for(int i=1;i <=100;i++){
//
//	(i%2==0)?(evenresult+=i):(oddresult+=i);//3�׿����� ����Ѱ� 
//	}
//	printf("%d %d",evenresult,oddresult);
