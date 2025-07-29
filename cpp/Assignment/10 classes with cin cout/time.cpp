using namespace std;
#include<iostream>

struct Time {
    int hour;
    int min;
    int sec;
    void display(){
    	cout<<"\nHour: "<<this->hour;
        cout<<"\nMinutes: "<<this->min;
        cout<<"\nSeconds: "<<this->sec;
   }
   void sethour(int a){
   	this->hour=a;
   }
    void setmin(int a){
   	this->min=a;
   }
    void setsec(int a){
   	this->sec=a;
   }
   int gethour(){
   	return this->hour;
   }
   int getmin(){
   	return this->min;
   }
   int getsec(){
   	return this->sec;
   }
   Time(){
   	this->hour=0;
   	this->min=0;
   	this->sec=0;
   }
   Time(int a,int b,int c){
   	this->hour=a;
   	this->min=b;
   	this->sec=c;
   }
   
   
   
}; 

int main() {
    Time T;
  T.sethour(2);
  T.setmin(23);
  T.setsec(12360);
  Time T2(4,8,2002);
T.display();
T2.display();
    
}
