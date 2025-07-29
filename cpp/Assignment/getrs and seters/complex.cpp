#include <stdio.h>

struct Complex {
    int real;
    int imaginary;
    void display(){
    printf("\nReal+Imaginary =%d+%di",this->real,this->imaginary);
   // printf("\nImaginary: %d", this->imaginary);
	}
	void setreal(int a){
		this->real=a;
	}
		void setimaginary(int a){
		this->imaginary=a;
	}
	int getimaginary(){
		return this->imaginary;
	}
	int getreal(){
		return this->real;
	}
	Complex(){
		this->real=0;
		this->imaginary=0;
	}
	Complex(int a,int b){
		this->real=a;
		this->imaginary=b;
	}
}; 

int main() {
     Complex C1;
     C1.display();
     Complex C2(15,85);
     C2.display();
     C1.setimaginary(9);
     C1.setreal(7);
     C1.display();
     
    
}
