#include <stdio.h>

int sum (int x, int y){
	return x+y;
}

int main(){
	int x = 5, y = 12;
	printf("Sum : x+y = %d\n",sum(x,y));
}
