#include<stdio.h>
#include"input.h"
#include<stdlib.h>

int getnum (char** input){
	*input = malloc(100);
	printf("Type in the type of the data(from binary to hexadecimal) in number");
	scanf("%s", *input);
	return 0;
}
