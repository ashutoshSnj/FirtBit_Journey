#include <stdio.h>
#include <string.h>
/*
int main() {
    char str[] = "Hello, World! Welcome to C programming.";
    
    char *token = strtok(str, " ");
    
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ,"); 
    }
}*/


int main() {
    char str[] = "This,is a sample string";
    char *token;

    // Get the first token
    token = strtok(str, " ");

    // Walk through other tokens
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL," ");
    }

    return 0;
}

