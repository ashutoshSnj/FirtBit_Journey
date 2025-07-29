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
}; 

int main() {
    Time T1;

    T1.hour = 8;
    T1.min = 30;
    T1.sec = 45;
T1.display();
    
}
