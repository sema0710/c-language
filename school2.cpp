#include <stdio.h>
main(){
	int a,b=0,result=0;
	scanf("%d",&a);
	while(1){
		if(a < result)break;
		result+=b;
		b++;
	}
	printf("%d",b-1);
//  codeup 1070
//	int month;
//	scanf("%d",&month);
//	switch(month){
//		case 12:case 1:case 2:{
//			printf("winter");
//			break;
//		}
//		case 3:case 4:case 5:{
//			printf("spring");	
//			break;
//		}
//		case 6:case 7:case 8:{
//			printf("summer");
//			break;
//		}
//		default:{
//			printf("fall");
//			break;
//		}
//	}
//의도적인 switch문에서 break문 생략 
//	char ch;
//	scanf("%c",&ch);
//	switch(ch){
//		case 'm':
//		case 'M':{
//			printf("morning");
//			break;
//		}
//	}
// switch case문 
//	char c=0;
//	scanf("%c",&c);
//	switch(c){
//		case 'a':{
//			printf("apple");
//			break;
//		}
//		case 'b':{
//			printf("banana");
//			break;
//		}
//		case 'c':{
//			printf("carrot");
//			break;
//		}
//		default:{
//			printf("plz enter a or b or c");
//		}
//	}
//	int a=0;
//	scanf("%d",&a); 
//	if(a > 0){printf("양수");}
//	if(a < 0){printf("음수");}
//	if(a == 0){printf("0");}

//int i=0;
//for(int i=1;i<=100;i++){
//	if(i%3 == 0||i%4==0){
//	printf("%d\n",i);
//} 
//}

//int a=0;
//scanf("%d",&a);
//if(a > 0){
//	printf("양수");
//}
//else if(a < 0){
//	printf("음수");
//} 
//else{
//	printf("0");
//}
//scanf("%d",&num);
//if(num >= 90){printf("a");}
//else if(num >= 80 && num < 90){printf("b");}
//else if(num >= 70 && num < 80){printf("c");}
//else if(num >= 60 && num < 70){printf("d");}
//else{printf("f");}
//return 0;
//int a,b;
//scanf("%d %d",&a,&b);
//a > b ? printf("%d",a) : printf("%d",b);
}

