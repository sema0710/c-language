#include <stdio.h>
struct student{
	char sname[10];
	int snum;
	char pnum[13];
};
int main(){
	struct student std1;
	printf("�̸��Է�");
	scanf("%s",std1.sname);
	printf("\n�й��Է�");
	scanf("%d",&std1.snum);
	printf("\n��ȭ��ȣ �Է�");
	scanf("%s",std1.pnum); 
	printf("�л��̸� : %s �й� : %d ��ȭ��ȣ : %s",std1.sname,std1.snum,std1.pnum);	
}
