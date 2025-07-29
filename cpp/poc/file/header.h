//#ifndef header_h
//#define header_h
using namespace std;
  #include<iostream>
class Complex{
	int real;
    int imaginary;
    public:
    	 void display();
    	 void setreal(int );
    	 void setimaginary(int );
    	 int getimaginary();
    	 int getreal();
    	 Complex();
    	 Complex(int,int);
    	Complex add(Complex);
    	Complex add(int );
    	Complex sub(Complex);
    	Complex sub(int );
    	Complex mul(Complex);
    	Complex mul(int );
    	Complex div(Complex);
    	Complex div(int );
};
//#endif