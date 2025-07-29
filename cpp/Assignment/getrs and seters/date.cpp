
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
	void setday(int a){
		this->day=a;
	}
	void setmonth(int a){
		this->month=a;
	}
	void setyear(int a){
		this->year=a;
	}
	int getday(){
		return this->day;
	}
int getmonth(){
		return this->month;
	}
	int getyear(){
		return this->year;
	}

	
}; 

int main() {
     Date d;
   d.setday(7);
   d.setmonth(9);
   d.setyear(2002);
   printf("%d/%d/%d",d.getday(),d.getmonth(),d.getyear());
  
}

