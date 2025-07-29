using namespace std;
#include<iostre>

struct Complex {
    int real;
    int imaginary;
    void display(){
    cout<<"Real+Imaginary ="<<this->real<<"+"<<this->imaginary<<endl;

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
	  Complex add(Complex ash){
	  	   Complex temp ;
	  	   temp.real=this->real+ash.real;
	  	   temp.imaginary=this->imaginary+ash.imaginary;
	  	   return temp;
	  }
	Complex add(int a){
	  	Complex temp;
	  	temp.real=this->real+a;
	  	temp.imaginary=this->imaginary+a;
	  	return temp;
	  }
	  Complex sub(Complex str){
	  	Complex temp;
	  	temp.real=this->real-str.real;
	  	temp.imaginary=this->imaginary-str.imaginary;
	  	return temp;
	  }
	  Complex sub(int a){
	  	Complex temp;
	  	temp.real=this->real-a;
	  	temp.imaginary=this->imaginary-a;
	  	return temp;
	  }
	  Complex mul(Complex str){
	  	Complex temp;
	  	temp.real=(this->real)*(str.real);
	  	temp.imaginary=(this->imaginary)*(str.imaginary);
	  	return temp;
	  }
	  Complex mul(int a){
	  	Complex temp;
	  	temp.real=this->real*a;
	  	temp.imaginary=this->imaginary*a;
	  	return temp;
	  }
	   Complex div(Complex str){
	  	Complex temp;
	  	temp.real=(this->real)/(str.real);
	  	temp.imaginary=(this->imaginary)/(str.imaginary);
	  	return temp;
	  }
	  Complex div(int a){
	  	Complex temp;
	  	temp.real=this->real/a;
	  	temp.imaginary=this->imaginary/a;
	  	return temp;
	  }
}; 

int main() {
     Complex C1;
     C1.setreal(100);
     C1.setimaginary(9);
    // C1.display();
     Complex C2(15,85);
     //C2.display();
     Complex C3;
     C3=C1.add(C2);
     // C2 pass by value C2 is a variabal of Complex datatype 
  // C3.display();
     Complex C4;
     C4=C2.add(23);
     C4.display();
     C3=C1.sub(5);
    // C3.display();
    C4=C2.mul(C1);
     //C4.display();
     C4=C2.mul(5);
     //C4.display();
     C4=C1.div(C2);
     //C4.display();
     C4=C2.div(5);
     C4.display();
    
}
