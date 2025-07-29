
//#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Employee{
		int id;
	char name[20];
   double salary;
   public:
   	virtual void display();
   	void setid(int );
   	void setname(char*);
   	void setsalary(double);
   	int getid();
   	char* getname();
   	double getsalary();
   	virtual double cal_salary();
   		Employee();
   	Employee(int,char*,double);
};
