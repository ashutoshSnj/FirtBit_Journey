#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
}; 

void main() {
    struct Complex C1, C2;
    C1.real = 2.5;
    C1.imaginary = 3.6;
    printf("\nComplex Number 1 details:");
    
    printf("\nReal: %f", C1.real);
    printf("\nImaginary: %f", C1.imaginary);

    printf("\n\nComplex Number 2 details:");
    
    printf("\nEnter Real Part: ");
    scanf("%f", &C2.real);   
    
    printf("Enter Imaginary Part: ");
    scanf("%f", &C2.imaginary);  

    printf("\nReal: %f", C2.real);
    printf("\nImaginary: %f", C2.imaginary);
}
