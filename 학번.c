#include <stdio.h>
struct student{
	int hakbun;
	char name[20];
};
int main(){
	struct student p[50] = {0,};
	int flag = 0,count = 0,i,where;
	while(1){
	printf("1�� �Է�, 2�� ���� , 3�� Ż�� : ");
	scanf("%d",&flag);
	switch(flag){
		case 1:
			scanf("%d %s",&p[count].hakbun,&p[count].name);
			break;
		case 2:
			for(i=0;i<20;i++){
				printf("%d ",i);
				printf("%d ",p[i].hakbun);
				printf("%s\n",p[i].name);
			}
			printf("��� ��ĥ �ǰ���? : ");
			scanf("%d",&where);
			printf("�й� �̸� ������ �Է��ϼ��� :");
			scanf("%d %s",&p[where].hakbun,&p[where].name);
			break;
		case 3:
			goto out;
			break;
	}
	count++;
}
out:
	printf(" ");
}
