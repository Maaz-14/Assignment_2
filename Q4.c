#include<stdio.h>

int main(){
	int i,j,k;
	char tran[6][3]={"eat","tea","tan","ate","nat","bat"};
	
	char anagrams[6][100];
	for (i=0;i<6;i++){
		for(j=0;j<3;j++){
			for (k=0;k<3;k++){
				if(tran[i][j]==tran[i+1][k]){
					anagrams[i][j]=tran[i+1][k];
				}
			}
			if(anagrams[i]==tran[i+1]){
				printf("%s\n",anagrams[i]);
			}
			else{
				break;
			}
		}
		//printf("%s\n",anagrams[i]);
	}
	
	
	
	
	
	
	return 0;
}
