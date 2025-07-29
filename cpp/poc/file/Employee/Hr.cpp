
#include"hr.h"

 void  Hr::setcommission(double a){
		this->commission=a;	
	}
 double Hr::  getcommission(){
		return this->commission;
	}
	Hr:: Hr():Employee(){
		
		this->commission=0;
	}
	Hr:: Hr(int id,char* name,double salary,double commission):Employee(id,name,salary){
		this->commission=commission;
	}
	void Hr:: display(){
		Employee::display();
	cout<<"\n commission = "<<this->commission<<endl;
	}
	double Hr:: cal_salary(){
		return this->getsalary()+this->commission;
	}
	