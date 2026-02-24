#include<stdio.h>
#include"input.h"
#include<stdlib.h>

int main (void){
	char* input;
	getnum(&input);
	printf("the data type is %s",input);


	free(input);
	input = NULL;
}
