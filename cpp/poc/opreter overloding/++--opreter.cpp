using namespace std;
#include<iostream>
struct Complex{
	int real;
	int img;
	void display(){
		cout<<"real+img = "<<this->real<<"+"<<this->img<<"i"<<endl;
	}
	void setreal(int a){
		this->real=a;
	}
	void setimg(int a){
		this->img=a;
	}
   int getreal(){
   	return this->real;
   }
   int getimg(){
   	return this->img;
   }
   Complex(int a,int b){
   	this->real=a;
   	this->img=b;
   }
   Complex(){
   	this->real=0;
   	this->img=0;
   }
   Complex operator++(){
   	Complex temp;
   	temp.real=++this->real;
   	temp.img=++this->img;
   	return temp;
   }
    Complex operator++(int){
   	Complex temp;
   	temp.real=this->real++;
   	temp.img=this->img++;
   	return temp;
   }
   Complex operator--(){
   	Complex temp;
   	temp.real=--this->real;
   	temp.img=--this->img;
   	return temp;
   }
    Complex operator--(int){
   	Complex temp;
   	temp.real=this->real--;
   	temp.img=this->img--;
   	return temp;
   }
};
int main(){
	Complex X(85,45);
//	X.display();
	Complex c=X--;
	c.display();
	X.display();
	Complex v(5,10);
	// c=++v;
	//	c.display();
	
}