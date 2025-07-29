#include <stdio.h>
#include <ctype.h>  

void main() {
    char chh[13] ="ashutosh";  
    int i = 0;


    while (chh[i]!='\0') {
        chh[i] = toupper(chh[i]);  
        i++;
    }

    printf("%s", chh);  
}
