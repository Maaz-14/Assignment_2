#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int cols=5, rows=6;
char array[100][100];
int i,j,k,score=0;
char user_input[100];
int length;
int found;// working as boolean.

void random_array(char array[rows][cols]); // must write the array name to avoid error!(MORAL OF THE STORY)
void last_row(char array[rows][cols]);// must write the array name to avoid error!(MORAL OF THE STORY)
void array_printing(char array[rows][cols]);// must write the array name to avoid error!(MORAL OF THE STORY)
int searching_H (char array[rows][cols],char user_input[]);
int searching_V(char array[rows][cols],char user_input[]);
void searching (char array[rows][cols],char user_input[]);

int main(){

	do{
		srand(time(NULL));
		random_array(array);
		last_row(array);
		array_printing(array);
		printf("Search str: ");
		scanf("%s",user_input);
		if(strcmp(user_input,"END")!=0){
			searching(array,user_input);
		}
	}while(strcmp(user_input,"END")!=0);
	printf("Score: %d",score);
	return 0;
}

void random_array(char array[rows][cols]){
	for(i=0;i<rows-1;i++){
		for(j=0;j<cols;j++){
			array[i][j]= 'A'+(rand() % 26);
		}
	}
}

void last_row(char array[rows][cols]){
	array[rows-1][0]='2';
	array[rows-1][1]='5';
	array[rows-1][2]='5';
	array[rows-1][3]='7';
	array[rows-1][4]='A'+(rand()%26);
}

void array_printing(char array[rows][cols]){
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%c ",array[i][j]);
		}
		printf("\n");
	}
}

int searching_H (char array[rows][cols],char user_input[]){
	length=strlen(user_input);
	
	for(i=0;i<rows;i++){
		for(j=0;j<=cols-length;j++){
			found=1;
			for(k=0;k<length;k++){
				if(array[i][j+k]!=user_input[k]){
					found=0;
					break;
				}
			}
			if (found==1) 
			return 1;
		}
	}
	return 0;
}
int searching_V(char array[rows][cols],char user_input[]){
	int length=strlen(user_input);
	
	for(j=0;j<cols;j++){
		for( i=0;i<=rows-length;i++){
			found=1;
			for(k=0;k<length;k++){
				if(array[i+k][j]!=user_input[k]){
					found=0;
					break;
				}	
			}
			if (found==1)
			return 1;	
		}
		
	}
	return 0;
}
void searching (char array[rows][cols],char user_input[]){
	found=searching_H(array,user_input) || searching_V(array,user_input);
	if(found==1){
		score=score+1;
		printf("\n%s is present. Score %d\n\n",user_input,score);
		
	}
	else{
		score=score-1;
		printf("\n%s is not present. Score %d\n\n",user_input,score);
	}
}

