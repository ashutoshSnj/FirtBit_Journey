#include <stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
    void display(){
    	printf("\nHour: %d",this->hour);
    printf("\nMinutes: %d", this->min);
    printf("\nSeconds: %d", this->sec);
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
   
   
}; 

int main() {
    Time T;
  T.sethour(2);
  T.setmin(23);
  T.setsec(12360);
T.display();
    
}
