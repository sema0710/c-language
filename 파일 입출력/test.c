#include <stdio.h>
int main(){
	FILE *fp1 = fopen("memo1.txt","r");
	FILE *fp2 = fopen("memo2.txt","w");
	int a;
	fscanf(fp1,"%d",&a);
	fprintf(fp2,"%d",a);
}
