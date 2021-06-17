#include<stdio.h>

int main(){
	char name[] = "Alia Bharti";
	greeting(name);
}

void greeting(char string[]){
	printf("Hello, %s, How are you?", string);
}
