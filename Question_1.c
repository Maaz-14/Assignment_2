#include <stdio.h>

int main() {
    int a[5], i, smallest=9999, second_smallest=9999;

    for(i = 0; i < 5; i++) {
        printf("element- %d : ", i);
        scanf("%d", &a[i]);
        if(a[i]>=9999){
        	printf("Invalid input on index %d",i);
        	printf("\nExiting the program!");
        	return 1;
		}
    }
    
	for(i = 0; i < 5; i++) {
        if(a[i] < smallest) {
            second_smallest = smallest;
            smallest = a[i];
        } else if(a[i] < second_smallest && a[i] != smallest) {
            second_smallest = a[i];
        }
    }
	printf("The Second smallest element in the array is: %d", second_smallest);
	//printf("\nThe Smallest element in the array is: %d",smallest);
    
    return 0;
}

