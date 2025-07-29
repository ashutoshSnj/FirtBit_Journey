using namespace std;
#include<iostream>

struct Complex {
    int real;
    int imaginary;
    void display(){
    cout<<"\nReal+Imaginary = "<<this->real<<"+"<<this->imaginary<<"i";
   
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
	//defoult Constructer
	Complex(){
		this->real=0;
		this->imaginary=0;
	}
	//parametrize constructor
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
     
    
}
