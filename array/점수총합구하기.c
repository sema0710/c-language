#include <stdio.h>
int main(){
int field[5][6];
int i,j,sub=0;
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		scanf("%d",&field[i][j]);
	}
}
for(i=0;i<5;i++){
	field[i][4] = field[i][0] + field[i][1] + field[i][2] + field[i][3];
	sub = 0;
}
sub = 0;
for(i=0;i<5;i++){
	field[4][i] = field[0][i] + field[1][i] + field[2][i] + field[3][i];
	sub = 0;
}
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		printf("%2d ",field[i][j]);
	}
	printf("\n");
}
}
