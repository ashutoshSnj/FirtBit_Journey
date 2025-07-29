#include <stdio.h>
#include <ctype.h>  

void main() {
    char chh[13] ="ASHU";  
    int i = 0;


    while (chh[i]!='\0') {
        chh[i] = tolower(chh[i]);  
        i++;
    }

    printf("%s", chh);  
}
