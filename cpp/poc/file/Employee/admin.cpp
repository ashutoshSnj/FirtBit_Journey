
#include"admin.h"
void Admin::setallowance(double a){
 		this->allowance=a;
	 }
	 double Admin::getallowance(){
	 	return this->allowance;
	 }
	 Admin::Admin():Employee(){
	 
	 	this->allowance=0;
	 }
	 Admin::Admin(int id,char* name,double salary,double allowance):Employee(id,name,salary){
	
	 	this->allowance=allowance;
	 }
	 void Admin:: display(){
	 	Employee::display();
	cout<<"\n allowance = "<<this->allowance<<endl;	
	 }
	 double Admin::cal_salary(){
		return this->getsalary()+this->allowance;
	}