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
	  temp.feet=this->feet+arr.feet;
	  temp.inch=this->inch+arr.inch;
		return temp;
	}
		Distance operator+(int r){
		Distance temp;
	  temp.feet=this->feet+r;
	  temp.inch=this->inch+r;
		return temp;
	}
	Distance operator-(Distance arr){
		Distance temp;
	  temp.feet=this->feet-arr.feet;
	  temp.inch=this->inch-arr.inch;
		return temp;
	}
		Distance operator-(int r){
		Distance temp;
	  temp.feet=this->feet-r;
	  temp.inch=this->inch-r;
		return temp;
	}
	Distance operator*(Distance arr){
		Distance temp;
	  temp.feet=(this->feet)*(arr.feet);
	  temp.inch=(this->inch)*(arr.inch);
		return temp;
	}
		Distance operator*(int r){
		Distance temp;
	  temp.feet=this->feet*r;
	  temp.inch=this->inch*r;
		return temp;
	}
	Distance operator/(Distance arr){
		Distance temp;
	  temp.feet=(this->feet)/(arr.feet);
	  temp.inch=(this->inch)/(arr.inch);
		return temp;
	}
		Distance operator/(int r){
		Distance temp;
	  temp.feet=this->feet/r;
	  temp.inch=this->inch/r;
		return temp;
	}
	
	
}; 
Distance operator+(int a,Distance D){
		Distance temp;
		temp.feet=a+D.feet;
		temp.inch=a+D.inch;
		return temp;
	}
	Distance operator-(int a,Distance D){
		Distance temp;
		temp.feet=a-D.feet;
		temp.inch=a-D.inch;
		return temp;
	}
	Distance operator*(int a,Distance D){
		Distance temp;
		temp.feet=a*D.feet;
		temp.inch=a*D.inch;
		return temp;
	}
	Distance operator/(int a,Distance D){
		Distance temp;
		temp.feet=a/D.feet;
		temp.inch=a/D.inch;
		return temp;
	}
int main() {
    
    Distance D1(45,88);
    Distance D2(5,2);
    Distance x=5+D2;
        // Distance x=operator+(5,D2);
    x.display();
    Distance D3=D1+D2;
    // Distance D3=D1.operator+(D2);
    D3.display();
   D3=D2+8;
   // D3=D2.operator+(8);
   D3.display();
   D3=D1-D2;
   // D3=D1.operator-(D2);
   D3.display();
  D3=D1-(5);
    D3.display();
  D2=D1*(D2);
  D2.display();
 D2=D2*(2);
   D2.display();
   Distance x1(15,20);
   Distance x2(5,2);
   Distance x3=x1/x2;
     x3.display();
     x3=48/x2;
     /// x3=operator/(48,x2);
       x3=4+x2;
        /// x3=operator+(4,x2);
    x3.display();
    
}
