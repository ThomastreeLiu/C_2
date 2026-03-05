#include<stdio.h>
#include"input.h"
#include<stdlib.h>
#include<stdbool.h>

int getnum (int** data_type, char** input, int** result_type, int** digit_write){
	*data_type = malloc(sizeof **data_type);
	*input = malloc(101);
	*result_type = malloc(sizeof **result_type);
	*digit_write = malloc(sizeof **digit_write);
	printf("Type in the type of the data(from binary to hexadecimal) in number\n");
	scanf("%2d", *data_type);
	int ca = getchar();
	while('\n' != ca || 2 > **data_type || 16 < **data_type){
		while('\n' != ca && EOF != ca){
			ca = getchar();
		}		
		printf("invalid value, please type a integer from 2 to 16\n");
		scanf("%2d", *data_type);
		ca = getchar();
	}
	//data type complete
	
	printf("Type in the value you want to convert\n");
	scanf("%100s", *input);
	ca = getchar();
	int digit = 100;
//	bool input_status = true;
	while('\n' != ca/* || !input_status*/){
		printf("You typed in a value out of range, how many digit you want to type in\n");
		while('\n' != ca && EOF != ca){
			ca = getchar();
		}
		scanf("%d", &digit);
		ca = getchar();
		*input = realloc(*input, digit+1);
		printf("Now type in the value you want to convert\n");
		fgets(*input, digit+1, stdin);
		ca = getchar();
	/*	input_status = true;
		if('\n' != ca){
			input_status = false;
		}*/
	}
	//This part will eat the first digit and makes the rest of it don't working
	printf("Memory check complete\n");
//	ca = getchar();
//	ca = getchar();
//digit check complete

//mathenatic check start
/*	while((*input)[**digit_write] != '\0'){
		digit_write++;
	}*/
	bool status = true;
	for(int i = 0; i<=(digit-1); i++){
		if (2 == **data_type && '0' != (*input)[i] && '1' != (*input)[i]){
			status = false;
		}
		else if (3 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i]){
			status = false;
		}
		else if (4 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i]){
			status = false;
		}
		else if (5 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i]){
			status = false;
		}
		else if (6 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i] && '5' != (*input)[i]){
			status = false;
		}
	 	else if (7 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i] && '5' != (*input)[i] && '6' != (*input)[i]){
			status = false;
		}
		else if (8 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i] && '5' != (*input)[i] && '6' != (*input)[i] && '7' != (*input)[i]){
			status = false;
		}
		else if (9 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i] && '5' != (*input)[i] && '6' != (*input)[i] && '7' != (*input)[i] && '8' != (*input)[i]){
			status = false;
		}
		else if (10 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i] && '5' != (*input)[i] && '6' != (*input)[i] && '7' != (*input)[i] && '8' != (*input)[i] &&
			       	'9' != (*input)[i]){
			status = false;
		}
		else if (11 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i] && '5' != (*input)[i] && '6' != (*input)[i] && '7' != (*input)[i] && '8' != (*input)[i] &&
			       	'9' != (*input)[i] && 'a' != (*input)[i] && 'A' != (*input)[i]){
			status = false;
		}
		else if (12 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i] && '5' != (*input)[i] && '6' != (*input)[i] && '7' != (*input)[i] && '8' != (*input)[i] &&
			       	'9' != (*input)[i] && 'a' != (*input)[i] && 'A' != (*input)[i] && 'b' != (*input)[i] && 'B' != (*input)[i]){
			status = false;
		}
		else if (13 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i] && '5' != (*input)[i] && '6' != (*input)[i] && '7' != (*input)[i] && '8' != (*input)[i] &&
			       	'9' != (*input)[i] && 'a' != (*input)[i] && 'A' != (*input)[i] && 'b' != (*input)[i] && 'B' != (*input)[i] &&
			       	'c' != (*input)[i] && 'C' != (*input)[i]){
			status = false;
		}
		else if (14 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i] && '5' != (*input)[i] && '6' != (*input)[i] && '7' != (*input)[i] && '8' != (*input)[i] &&
			       	'9' != (*input)[i] && 'a' != (*input)[i] && 'A' != (*input)[i] && 'b' != (*input)[i] && 'B' != (*input)[i] &&
			       	'c' != (*input)[i] && 'C' != (*input)[i] && 'd' != (*input)[i] && 'D' != (*input)[i]){
			status = false;
		}
		else if (15 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i] && '5' != (*input)[i] && '6' != (*input)[i] && '7' != (*input)[i] && '8' != (*input)[i] &&
			       	'9' != (*input)[i] && 'a' != (*input)[i] && 'A' != (*input)[i] && 'b' != (*input)[i] && 'B' != (*input)[i] &&
			       	'c' != (*input)[i] && 'C' != (*input)[i] && 'd' != (*input)[i] && 'D' != (*input)[i] && 'e' != (*input)[i] &&
			       	'E' != (*input)[i]){
			status = false;
		}
		else if (16 == **data_type && '0' != (*input)[i] && '1' != (*input)[i] && '2' != (*input)[i] && '3' != (*input)[i] &&
			       	'4' != (*input)[i] && '5' != (*input)[i] && '6' != (*input)[i] && '7' != (*input)[i] && '8' != (*input)[i] &&
			       	'9' != (*input)[i] && 'a' != (*input)[i] && 'A' != (*input)[i] && 'b' != (*input)[i] && 'B' != (*input)[i] &&
			       	'c' != (*input)[i] && 'C' != (*input)[i] && 'd' != (*input)[i] && 'D' != (*input)[i] && 'e' != (*input)[i] &&
			       	'E' != (*input)[i] && 'f' != (*input)[i] && 'F' != (*input)[i]){
			status = false;
		}

		while(('\n' != ca && EOF != ca) || !status){
			if (!status){
				printf("You typed in a value out of character, please type in (1-9);(a-f);(A-F)\n");
			}
			else if('\n' != ca && EOF != ca){
				printf("You typed in a value out of range\n");
			} 
			printf("How many digits you want\n");
			while('\n' != ca && EOF != ca){
				ca = getchar();
			}
			scanf("%d", &digit);
			ca = getchar();
			*input = realloc(*input, digit+1);
			printf("Now type in the value you want to convert\n");
			fgets(*input, digit+1, stdin);
			//ca = getchar();
			//This is where bug came out, I put ca = getchar(); to the end of the loop. Really strange, it solved the bug
			i = 0;
		/*	input_status = true;
			if('\n' != ca){
 			input_status = false;
			}*/
			status = true;
			ca = getchar();
		}
	}
        **digit_write = digit;	

	return 0;
}
