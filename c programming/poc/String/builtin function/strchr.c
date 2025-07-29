#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Ashutosh Shelke";
    char *ptr = strchr(str, 'u');  
    
    if (ptr) {  
        printf("Found 'u' at position: %ld\n", ptr - str); 
    } else {
        printf("'u' not found\n");
    }

    printf("%d",ptr);
    printf("\n%d",str);
}
