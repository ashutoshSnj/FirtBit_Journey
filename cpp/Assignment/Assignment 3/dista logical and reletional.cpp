using namespace std;
#include<iostream>
struct Distance{
	int feet;
	int inch;
	void display(){
		cout<<"Feet is ="<<this->feet<<endl;
		cout<<"inch is = "<<this->inch<<endl;
	}
	int gettotalinches(){
		return (this->feet*12)+this->inch;
	}
	void setfeet(int a){
		this->feet=a;
	}
	void setinch(int a){
	this->inch=a;
   }
   int  getfeet(){
		return this->feet;
	}
	int  getinch(){
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
  int operator<(Distance d)
   {
   	return this->gettotalinches()<d.gettotalinches();
   }
   int operator&&(Distance d){
   	return this->gettotalinches()&&d.gettotalinches();
   }

   
};
int main(){
	Distance d1(89,95);
	Distance d2(100,929);
	if(d1<d2){
		cout<<"D2 is greter"<<endl;
	}
	 else{
	 	cout<<"D1 is greter"<<endl;
	 }
	  
	
}