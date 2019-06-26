#include <stdio.h>
int main(){
	FILE *fp1 = fopen("memo1.txt","w");
	FILE *fp2 = fopen("memo2.txt","w");
	fprintf(fp1,"%d",1);
	int a;
	fscanf(fp1,"%d",&a);
	fprintf(fp2,"%d",a);
}
