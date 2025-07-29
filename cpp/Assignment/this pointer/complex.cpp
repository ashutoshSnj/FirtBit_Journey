#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
    void display(){
    	 printf("\nComplex Number  details:");
    printf("\nReal: %f",this->real);
    printf("\nImaginary: %f", this->imaginary);
	}
}; 

int main() {
     Complex C1;
    C1.real = 2.5;
    C1.imaginary = 3.6;
    C1.display();
}
