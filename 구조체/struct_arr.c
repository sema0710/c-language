#include <stdio.h>
struct person{
	char name[20];
	int age;
};
int main(){
	struct person ps1[3];//person이라는 구조체로 3칸 배열을 선언 
	int i;
	for(i=0;i<3;i++){
		scanf("%d",&ps1[i].age);
		scanf("%s",ps1[i].name);
	}
	for(i=0;i<3;i++){
		printf("%d %s\n",ps1[i].age,ps1[i].name);
	}
}
