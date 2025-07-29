using namespace std;
#include<iostream>

struct Distance {
    int feet;
    int inch;
    void display(){
    	cout<<"\nDistance details:";
    cout<<"\nFeet: "<< this->feet;
    cout<<"\nInches: "<< this->inch;
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
	
}; 

int main() {
     Distance D1,d2(12,89);
    D1.setfeet(12);
    D1.setinch(10);
    D1.display();
  
    d2.display();
}
