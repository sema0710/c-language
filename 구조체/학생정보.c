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
	printf("학생 수를 입력해주세요 : ");
	scanf("%d",&n);	
	p1 =  malloc(n * sizeof(struct student));
	ptr = p1;
	for(i = 0;i < n;i++){
	printf("학번 입력: ");
	scanf("%d",&(*((struct student *)ptr)).class_num);
	printf("이름 입력: ");
	scanf("%s",&(*((struct student *)ptr)).name);
	printf("나이 입력: ");
	scanf("%d",&(*((struct student *)ptr)).age);
	printf("주소 입력: ");
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
