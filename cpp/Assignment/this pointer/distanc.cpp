#include <stdio.h>

struct Distance {
    int feet;
    int inch;
    void display(){
    	printf("\nDistance details:");
    printf("\nFeet: %d", this->feet);
    printf("\nInches: %d", this->inch);
	}
}; 

int main() {
     Distance D1;
    D1.feet = 8;
    D1.inch = 15;
    D1.display();
    
}
