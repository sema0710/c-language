#include <stdio.h>
int jinsu(int jinsu1,int jinsu2,int num){
	int i = "";
	char result = 0;
	switch(jinsu1){
		case 10:
			for(i=0;num > jinsu2;i++){
				result += num%jinsu2;
				num = num/jinsu2;
			}
			printf("%s",result);
			break;
	}
}
