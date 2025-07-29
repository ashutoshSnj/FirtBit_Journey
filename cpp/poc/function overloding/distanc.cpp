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
	Distance add(Distance arr){
		Distance temp;
	  temp.feet=this->feet+arr.feet;
	  temp.inch=this->inch+arr.inch;
		return temp;
	}
		Distance add(int r){
		Distance temp;
	  temp.feet=this->feet+r;
	  temp.inch=this->inch+r;
		return temp;
	}
	Distance sub(Distance arr){
		Distance temp;
	  temp.feet=this->feet-arr.feet;
	  temp.inch=this->inch-arr.inch;
		return temp;
	}
		Distance sub(int r){
		Distance temp;
	  temp.feet=this->feet-r;
	  temp.inch=this->inch-r;
		return temp;
	}
	Distance mul(Distance arr){
		Distance temp;
	  temp.feet=(this->feet)*(arr.feet);
	  temp.inch=(this->inch)*(arr.inch);
		return temp;
	}
		Distance mul(int r){
		Distance temp;
	  temp.feet=this->feet*r;
	  temp.inch=this->inch*r;
		return temp;
	}
	Distance div(Distance arr){
		Distance temp;
	  temp.feet=(this->feet)/(arr.feet);
	  temp.inch=(this->inch)/(arr.inch);
		return temp;
	}
		Distance div(int r){
		Distance temp;
	  temp.feet=this->feet/r;
	  temp.inch=this->inch/r;
		return temp;
	}
	
}; 

int main() {
    
    Distance D1(45,88);
    Distance D2(5,2);
    Distance D3=D1.add(D2);
   // D3.display();
 //  D3=D2.add(8);
   //D3.display();
 //  D3=D1.sub(D2);
  // D3.display();
 //  D3=D1.sub(5);
   // D3.display();
 //  D2=D1.mul(D2);
  //D2.display();
 // D2=D2.mul(2);
   //D2.display();
   D3=D1.div(D2);
   D3.display();
   
    
}
