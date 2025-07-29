#include <stdio.h>

struct Complex {
    int real;
    int imaginary;
    void display(){
    printf("\nReal+Imaginary =%d+%di",this->real,this->imaginary);
   
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
	  Complex operator+(Complex ash){
	  	   Complex temp ;
	  	   temp.real=this->real+ash.real;
	  	   temp.imaginary=this->imaginary+ash.imaginary;
	  	   return temp;
	  }
	Complex operator+(int a){
	  	Complex temp;
	  	temp.real=this->real+a;
	  	temp.imaginary=this->imaginary+a;
	  	return temp;
	  }
	  Complex operator-(Complex str){
	  	Complex temp;
	  	temp.real=this->real-str.real;
	  	temp.imaginary=this->imaginary-str.imaginary;
	  	return temp;
	  }
	  Complex operator-(int a){
	  	Complex temp;
	  	temp.real=this->real-a;
	  	temp.imaginary=this->imaginary-a;
	  	return temp;
	  }
	  Complex operator*(Complex str){
	  	Complex temp;
	  	temp.real=(this->real)*(str.real);
	  	temp.imaginary=(this->imaginary)*(str.imaginary);
	  	return temp;
	  }
	  Complex operator*(int a){
	  	Complex temp;
	  	temp.real=this->real*a;
	  	temp.imaginary=this->imaginary*a;
	  	return temp;
	  }
	   Complex operator/(Complex str){
	  	Complex temp;
	  	temp.real=(this->real)/(str.real);
	  	temp.imaginary=(this->imaginary)/(str.imaginary);
	  	return temp;
	  }
	  Complex operator/(int a){
	  	Complex temp;
	  	temp.real=this->real/a;
	  	temp.imaginary=this->imaginary/a;
	  	return temp;
	  }
}; 
    Complex operator+(int a,Complex b){
    
    	  Complex temp;
    	  printf("segv");
    	  temp.real=a+b.real;
    	  temp.imaginary=a+b.imaginary;
    	  return temp;
	}
	Complex operator-(int a,Complex b){
    	  Complex temp;
    	  temp.real=a-b.real;
    	  temp.imaginary=a-b.imaginary;
    	  return temp;
	}
	Complex operator*(int a,Complex b){
    	  Complex temp;
    	  temp.real=a*b.real;
    	  temp.imaginary=a*b.imaginary;
    	  return temp;
	}
	Complex operator/(int a,Complex b){

    	  Complex temp;
    	  temp.setreal(a/b.real);
    	  temp.imaginary=a/b.imaginary;
    	  return temp;
	}
int main() {
     Complex C1;
     C1.setreal(100);
     C1.setimaginary(9);
     Complex C2(15,85);
     Complex C3=2+C2;
     ///Complex C3=operator+(2,C2);
     C3=C1+C2;
     //Complex C3=C1.operator+(C2)
     ////  compiler pass the C1 addres and this  pointer pointes C1,and  C2 pass by value
     C3.display();
    
}
