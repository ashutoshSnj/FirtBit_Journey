#include <stdio.h>

struct Date{
    int day;
    int month;
    int year;
    void display(){
    	printf("\nDate details:");
    printf("\nDay: %d", this->day);
    printf("\nMonth: %d", this->month);
    printf("\nYear: %d", this->year);
	}
}; 

int main() {
     Date D1;
    D1.day = 7;
    D1.month = 9;
    D1.year=2002;
    D1.display();
    
}