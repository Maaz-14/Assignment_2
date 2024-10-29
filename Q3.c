#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k;
	char text[3][100];
	int freq[3]={0};
	for (i=0;i<3;i++){
		printf("Text %d is: ",i+1);
		scanf("%s",text[i]);	
	}
	for (i=0;i<3;i++){
		for (j=0;j<strlen(text[i]);j++){
			for (k=j+1;k<strlen(text[i]);k++){
				if(text[i][j]==text[i][k]){
					text[i][j]=' ';
					
					freq[i]++;		
				}
			}
		}

	}
	for (i=0;i<3;i++){
		printf("\n\n");
		printf("Compressed text %d=",i+1);
		for (j=0;j<strlen(text[i]);j++){
			if(text[i][j]!=' '){
				printf("%c",text[i][j]);
			}
		}
		printf("\n");
		printf("Number of Characters removed: %d\n",freq[i]);
	}

	return 0;
}
