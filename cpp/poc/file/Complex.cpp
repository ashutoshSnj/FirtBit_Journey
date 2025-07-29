

   #include"header.h"
   
   void Complex:: display(){
    cout<<"Real+Imaginary ="<<this->real<<"+"<<this->imaginary<<endl;

	}
	void Complex:: setreal(int a){
		this->real=a;
	}
		void Complex:: setimaginary(int a){
		this->imaginary=a;
	}
	int Complex:: getimaginary(){
		return this->imaginary;
	}
	int Complex:: getreal(){
		return this->real;
	}
	Complex:: Complex(){
		this->real=0;
		this->imaginary=0;
	}
	Complex:: Complex(int a,int b){
		this->real=a;
		this->imaginary=b;
	}
	  Complex Complex:: add(Complex ash){
	  	   Complex temp ;
	  	   temp.real=this->real+ash.real;
	  	   temp.imaginary=this->imaginary+ash.imaginary;
	  	   return temp;
	  }
	Complex Complex:: add(int a){
	  	Complex temp;
	  	temp.real=this->real+a;
	  	temp.imaginary=this->imaginary+a;
	  	return temp;
	  }
	  Complex Complex:: sub(Complex str){
	  	Complex temp;
	  	temp.real=this->real-str.real;
	  	temp.imaginary=this->imaginary-str.imaginary;
	  	return temp;
	  }
	  Complex Complex::  sub(int a){
	  	Complex temp;
	  	temp.real=this->real-a;
	  	temp.imaginary=this->imaginary-a;
	  	return temp;
	  }
	  Complex Complex::  mul(Complex str){
	  	Complex temp;
	  	temp.real=(this->real)*(str.real);
	  	temp.imaginary=(this->imaginary)*(str.imaginary);
	  	return temp;
	  }
	  Complex Complex::  mul(int a){
	  	Complex temp;
	  	temp.real=this->real*a;
	  	temp.imaginary=this->imaginary*a;
	  	return temp;
	  }
	   Complex Complex:: div(Complex str){
	  	Complex temp;
	  	temp.real=(this->real)/(str.real);
	  	temp.imaginary=(this->imaginary)/(str.imaginary);
	  	return temp;
	  }
	  Complex Complex:: div(int a){
	  	Complex temp;
	  	temp.real=this->real/a;
	  	temp.imaginary=this->imaginary/a;
	  	return temp;
	  }
	  