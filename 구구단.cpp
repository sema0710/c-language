#include <stdio.h>
int main(){
//	for(dan=1;dan < 10;dan++){
//		printf("%d´Ü\n",dan);
//		for(su=1;su < 10;su++){
//			printf("%d * %d = %2d\n",dan,su,dan*su);
//		}
//		printf("\n");
//	} 
//int dan = 1;
//int su = 1;
//while(dan < 10){
//	while(su < 10){
//		printf("%d * %d = %2d\n",dan,su,dan*su);
//		su++;
//	}
//	su = 1;
//	dan++;
//	printf("\n");
//do{
//	printf("%d´Ü-->  ",dan);
//	do{
//		printf("%d*%d=%2d   ",su,dan,dan*su);
//		su++;
//	}while(su < 10);
//	su = 1;
//	dan++;
//	printf("\n");
//}while(dan < 10);
//int dan;
//int su = 1;
//scanf("%d",&dan);
//for(su=1;su < 10;su++){
//	printf("%d * %d = %2d\n",dan,su,dan*su);
//}
//int dan1,dan2,su=1;
//scanf("%d %d",&dan1,&dan2);
//for(dan1;dan1 <= dan2;dan1++){
//	for(su=1;su < 10;su++){
//		printf("%d * %d = %2d\n",dan1,su,dan1*su);
//	}
//	printf("\n");
//}
//}
//int dan1,dan2,su=1;
//scanf("%d %d",&dan1,&dan2);
//if(dan1 > dan2)
//{
//	for(dan2;dan1 >= dan2;dan2++)
//	{
//	for(su=1;su < 10;su++)
//		{
//			printf("%d * %d = %2d\n",dan2,su,dan2*su);
//		}
//	printf("\n");
//	}
//}
//else
//{
//	for(dan1;dan1 <= dan2;dan1++)
//	{
//		for(su=1;su < 10;su++)
//		{
//			printf("%d * %d = %2d\n",dan1,su,dan1*su);
//		}
//	printf("\n");
//	}
//}
//int i,j;
//for(j=1;j<=5;j++)
//{
//	for(i=1;i <= j;i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//int i,j;
//for(j=5;j>=1;j--)
//{
//	for(i=1;i <= j;i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
int i,j;
for(i=1;i <= 5;i++){
	for(j=1;j <= 5;j++){
		if(i == 3 && j == 3){
			printf("\t");
			continue;
		}
		printf("*\t");
	}
	printf("\n");
}
}
