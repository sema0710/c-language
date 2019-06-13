#include <stdio.h>
struct pos{
	int pos_x;
	int pos_y;
};
int main(){
	struct pos pos1;
	pos1.pos_x = 1;
	pos1.pos_y = 2;
	printf("%d %d",pos1.pos_x,pos1.pos_y);
}
