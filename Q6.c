#include<stdio.h>
int N;
int FirstMove;
int FirstPick(int);
int main(){
	printf("Enter the total number of matchsticks: ");
	scanf("%d",&N);
	FirstMove=FirstPick(N);
	if (FirstMove==-1){
		printf("\nIt is impossible for A to win the game!");
	}
	else{
		printf("\nA should pick %d matchsticks in his first turn to guarantee the win",FirstMove);
		// This move will led A to take the last turn. Hence winning the game!!
	}

	return 0;
}
int FirstPick(int N){
	if(N % 5 == 0){
		return -1;
	
	}
	else{
		return N % 5;
	}

}