#include <stdio.h>
#include <stdlib.h>

struct student{
	int age;
	char name[20];
	int hakbun;
	char adress[50];
};

int main(){	
struct student student[100];
int count,i;
printf("학생 수 입력");
scanf("%d",&count);
for(i=0;i<count;i++){
	printf("\nage :");
	scanf_s("%d",&student[i].age);
	while( getchar() != '\n' );
	printf("\nname :");
	gets(&student[i].name);
	printf("\nstudent number :");
	scanf_s("%d",&student[i].hakbun);
	while( getchar() != '\n');
	printf("\nadress :");
	gets(&student[i].adress);
} 
for(i=0;i<count;i++){
	printf("%d 번째 학생의 정보 -->\n나이: %d\n이름 : %s\n학번: %d\n주소 : %s\n",i+1,student[i].age,student[i].name,student[i].hakbun,student[i].adress);
} 
}
