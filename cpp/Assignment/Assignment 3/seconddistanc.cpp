using namespace std;
#include<iostream>

	struct Distance {
    int feet;
    int inch;
    void display(){
	
    cout<<"\nFeet:"<<this->feet;
    cout<<"\nInches:"<<this->inch;
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
	Distance(){
		this->feet=0;
		this->inch=0;
	}
		Distance(int a,int b){
		this->feet=a;
		this->inch=b;
	}
	Distance operator+(Distance arr){
		Distance temp;
	  temp.setfeet(this->feet+arr.getfeet());
	  temp.setinch(this->inch+arr.getfeet());
		return temp;
	}
		Distance operator+(int r){
			Distance temp;
	  temp.setfeet(this->feet+r);
	  temp.setinch(this->inch+r);
		return temp;
	}
		Distance operator-(Distance arr){
		Distance temp;
	  temp.setfeet(this->feet-arr.getfeet());
	  temp.setinch(this->inch-arr.getfeet());
		return temp;
	}
		Distance operator-(int r){
			Distance temp;
	  temp.setfeet(this->feet-r);
	  temp.setinch(this->inch-r);
		return temp;
	}
		Distance operator*(Distance arr){
		Distance temp;
	  temp.setfeet(this->feet*arr.getfeet());
	  temp.setinch(this->inch*arr.getfeet());
		return temp;
	}
		Distance operator*(int r){
			Distance temp;
	  temp.setfeet(this->feet*r);
	  temp.setinch(this->inch*r);
		return temp;
	}
		Distance operator/(Distance arr){
		Distance temp;
	  temp.setfeet(this->feet/arr.getfeet());
	  temp.setinch(this->inch/arr.getfeet());
		return temp;
	}
		Distance operator/(int r){
			Distance temp;
	  temp.setfeet(this->feet/r);
	  temp.setinch(this->inch/r);
		return temp;
	}
};
 
Distance operator+(int a,Distance D){
		Distance temp;
		temp.setfeet(a+D.getfeet());
		temp.setinch(a+D.getinch());
		return temp;
	}
	Distance operator-(int a,Distance D){
		Distance temp;
		temp.setfeet(a-D.getfeet());
		temp.setinch(a-D.getinch());
		return temp;
	}
	Distance operator*(int a,Distance D){
		Distance temp;
		temp.setfeet(a*D.getfeet());
		temp.setinch(a*D.getinch());
		return temp;
	}
	
	Distance operator/(int a,Distance D){
		Distance temp;
		temp.setfeet(a/D.getfeet());
		temp.setinch(a/D.getinch());
		return temp;
	}
int main(){
	Distance d1(75,85);
	Distance d2(5,15);
	Distance d3=100/d2;
	d3.display();
}