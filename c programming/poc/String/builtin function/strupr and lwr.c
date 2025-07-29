#include <stdio.h>
#include <string.h>

int main() {
    char str[50]={"ashutosh"};
    char atr[50]={"ASHU"};
    
    strupr(str);
    strlwr(atr);

    printf("Uppercase string: %s", str);
      printf(" \nstring: %s", atr);

}
