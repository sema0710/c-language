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
printf("�л� �� �Է�");
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
	printf("%d ��° �л��� ���� -->\n����: %d\n�̸� : %s\n�й�: %d\n�ּ� : %s\n",i+1,student[i].age,student[i].name,student[i].hakbun,student[i].adress);
} 
}
