#include <stdio.h>
void Horizontal();
void Vertical();



int main() {
    int values[100];
    int count;
    int i;
	printf("Enter the size of array: ");
	scanf("%d",&count);
	printf("array=\n");
	for(i=0;i<count;i++){
		scanf("%d",&values[i]);	
	}
    Horizontal(values, count);
    Vertical(values, count);

    return 0;
}
void Horizontal(int values[], int count) {
	int i,j;
    printf("Horizontal Histogram:\n");
    for ( i = 0; i < count; i++) {
        printf("Value %d: ", i + 1);
        for ( j = 0; j < values[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void Vertical(int values[], int count) {
	int max = 0;
	int i,j;
    for ( i = 0; i < count; i++) { // finding max value
        if (values[i] > max) {
            max = values[i];
        }
    }

    for ( i = max; i >0; i--) { // loop for max height
        for ( j = 0; j < count; j++) {
            if (values[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
		
		
	

    for ( i = 0; i < count; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}
	
		
	
	

