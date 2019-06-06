#include <stdio.h>
int main(){
//switch
int num1,num2,num3,sum,avg;
scanf("%d %d %d",&num1,&num2,&num3);
sum = num1+num2+num3;
avg=sum/3;
printf("%d\n",sum);
printf("%d\n",sum/3);
avg = avg/10;
switch(avg){
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("E");
}
return 0;


//if문으로 한것 
//if(avg >= 90)
//{
//printf("A");
//}
//else if(avg >= 80)
//{
//	printf("B");
//}
//else if(avg >= 70)
//{
//	printf("C");
//}
//else if(avg >= 60)
//{
//	printf("D");
//}
//else {
//	printf("E");
//}
}
