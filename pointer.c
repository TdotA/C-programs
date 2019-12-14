#include <stdio.h>

void calc(int x, int y, int *z){
	*z = x+y;
}
int main(){
	int x,y ;
	int res;
	scanf("%d", &x);
	scanf("%d", &y);
	calc(x, y, &res);
	printf("%d", res);
}
