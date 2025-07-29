#include <stdio.h>
#include <string.h>

void main() {
    printf("Enter the size of the string: ");
    int size;
    scanf("%d", &size);
    getchar();

    printf("Enter the string: ");
    char str[size];
    fgets(str, size, stdin);
    int b = strlen(str);
    if (str[b - 1] == '\n') {
        str[b - 1] = '\0';
    }

    char result[size];
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        int flag = 0; 

        for (int j = 0; j < k; j++) {
            if (str[i] == result[j]) {
                flag = 1; 
                break;
            }
        }
    
        if (flag == 0) { 
            result[k] = str[i]; 
            k++; 
        }
    }
    
    result[k] = '\0'; 

    printf("String after removing duplicates: %s\n", result);
}
