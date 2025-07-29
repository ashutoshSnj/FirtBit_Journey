#include <stdio.h>

struct Distance {
    int feet;
    int inch;
    void display(){
    	printf("\nDistance details:");
    printf("\nFeet: %d", this->feet);
    printf("\nInches: %d", this->inch);
	}
	void setfeet(int a){
		this->feet=a;
	}
	void setinch(int a){
		this->inch=a;
	}
	int getfeet(){
		return this->feet;
	}
	int getinch(){
		return this->inch;
	}
}; 

int main() {
     Distance D1;
    D1.setfeet(12);
    D1.setinch(10);
    D1.display();
    printf("\n%d\n%d",D1.getfeet(),D1.getinch());
    
}
