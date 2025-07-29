#include <stdio.h>

void main() {
    char str[50] = "ashutosh sanjay shelke"; 
    char btr[20] = "sanjay"; 
    int i, j, found;

    
    for (i = 0; str[i] != '\0'; i++) 
        if (str[i] == btr[0]) {
            found = 1; 
            
            for (j = 0; btr[j] != '\0'; j++) {
                if (str[i + j] != btr[j]) {
                    found = 0; 
                    break;
                }
            }

            if (found) {
                printf("String found\n");
            }
        }
    }

    
 
