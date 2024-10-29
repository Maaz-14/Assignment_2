#include <stdio.h>

int main() {
    // List of slogans
    char slogans[3][100] = {"buy now", "save big", "limited offer"};
    
    int freq[256]; // Array to store frequency of characters, initialized manually
    int i, j, len, ascii_value,s;

    // Loop through each slogan
    for( s = 0; s < 3; s++) {
        // Initialize frequency array for each slogan
        for(i = 0; i < 256; i++) {
            freq[i] = 0;
        }

        // Manually calculate the length of the slogan without using strlen
        len = 0;
        while(slogans[s][len] != '\0') {
            len++;
        }

        // Analyze the character frequency
        for(i = 0; i < len; i++) {
            ascii_value = slogans[s][i]; // Get ASCII value of the character
            //printf("accii value of %c is %d\n",slogans[s][i],ascii_value);
			freq[ascii_value]++;         // Increment the corresponding index in freq array
        	// 98th index 0 sai 1 ho jaigi! (b=98)
		}

        // Print the character frequencies
        printf(" For \"%s\":", slogans[s]);
        printf(" {");
        for(j = 0; j < 256; j++) {
            if(freq[j] > 0) {
                printf("'%c': %d, ", j, freq[j]);
            }
		}
		printf("}");
        printf("\n"); // Newline for readability between slogans
    }

    return 0;
}

