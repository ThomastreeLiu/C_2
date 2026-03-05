#include<stdio.h>
#include"input.h"
#include<stdlib.h>
#include<string.h>

int main (void){
	int* data_type;
	char* input;
	int* result_type;
	int* digit;
	getnum(&data_type, &input, &result_type, &digit);
	printf("the data type is %d\n",*data_type);
	//input = "5";
	//strcpy(input, "what");
	//printf("now %s\n",input);
	printf("value is %s\n", input);
	printf("%d digits\n", *digit);

	free(data_type);
	data_type = NULL;

	free(input);
	input = NULL;
}
