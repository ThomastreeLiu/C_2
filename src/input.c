#include<stdio.h>
#include"input.h"
#include<stdlib.h>

int getnum (int** data_type, char** input, int** result_type){
	*data_type = malloc(sizeof **data_type);
	*input = malloc(101);
	*result_type = malloc(sizeof **result_type);
	printf("Type in the type of the data(from binary to hexadecimal) in number");
	scanf("%2d", *data_type);
	int ca = getchar();
	while('\n' != ca || 2 > **data_type || 16 < **data_type){
		while('\n' != ca && EOF != ca){
			ca = getchar();
		}		
		printf("invalid value, please type a integer from 2 to 16");
		scanf("%2d", *data_type);
		ca = getchar();
	}
	//input part complete
	return 0;
}
