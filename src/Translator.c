#include<stdio.h>
#include"input.h"
#include<stdlib.h>
#include<string.h>

int main (void){
	int* data_type;
	char* input;
	int* result_type;
	getnum(&data_type, &input, &result_type);
	printf("the data type is %d\n",*data_type);
	//input = "5";
	strcpy(input, "what");
	printf("now %s\n",input);


	free(input);
	input = NULL;
}
