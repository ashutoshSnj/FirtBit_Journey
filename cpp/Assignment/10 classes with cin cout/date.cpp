using namespace std;
#include<iostream>

struct Date{
    int day;
    int month;
    int year;
    void display(){
    cout<<"\nDay: "<<this->day;
    cout<<"\nMonth: "<<this->month;
    cout<<"\nYear: "<<this->year;
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
	Date(){
		this->day=0;
		this->month=0;
		this->year=0;
	}
	Date(int a,int b,int c){
		this->day=a;
		this->month=b;
		this->year=c;
		
	}
	
}; 

int main() {
     Date d;
   d.setday(7);
   d.setmonth(9);
   d.setyear(2002);

    Date a(23,9,2002);
    a.display();
}

