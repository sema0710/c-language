#include <stdio.h>
struct student{
	char sname[10];
	int snum;
	char pnum[13];
};
int main(){
	struct student std1;
	printf("이름입력");
	scanf("%s",std1.sname);
	printf("\n학번입력");
	scanf("%d",&std1.snum);
	printf("\n전화번호 입력");
	scanf("%s",std1.pnum); 
	printf("학생이름 : %s 학번 : %d 전화번호 : %s",std1.sname,std1.snum,std1.pnum);	
}
