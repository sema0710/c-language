#include <stdio.h>
#include <stdlib.h>
struct student{
	int class_num;
	char name[20];
	int age;
	char addr[50];
};

	
int main()
{
	int n,i;
	struct student *p1;
	int *ptr;
	printf("�л� ���� �Է����ּ��� : ");
	scanf("%d",&n);	
	p1 =  malloc(n * sizeof(struct student));
	ptr = p1;
	for(i = 0;i < n;i++){
	printf("�й� �Է�: ");
	scanf("%d",&(*((struct student *)ptr)).class_num);
	printf("�̸� �Է�: ");
	scanf("%s",&(*((struct student *)ptr)).name);
	printf("���� �Է�: ");
	scanf("%d",&(*((struct student *)ptr)).age);
	printf("�ּ� �Է�: ");
	scanf("%s",&(*((struct student *)ptr)).addr);
	ptr++;
}
	ptr = p1;
for(i = 0;i < n;i++){
	printf("%d\n",(*((struct student *)ptr)).class_num);
	printf("%s\n",(*((struct student *)ptr)).name);
	printf("%d\n",(*((struct student *)ptr)).age);
	printf("%s\n",(*((struct student *)ptr)).addr);
	ptr++;
}
free(p1);
}
