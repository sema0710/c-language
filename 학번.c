#include <stdio.h>
struct student{
	int hakbun;
	char name[20];
};
int main(){
	struct student p[50] = {0,};
	int flag = 0,count = 0,i,where;
	while(1){
	printf("1번 입력, 2번 수정 , 3번 탈출 : ");
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
			printf("어디를 고칠 건가요? : ");
			scanf("%d",&where);
			printf("학번 이름 순으로 입력하세요 :");
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
