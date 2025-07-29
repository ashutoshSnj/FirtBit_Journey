
#include"salsmanager.h"
	void Salsemanager::setincentive(double a){
		this->incentive=a;
	}
		void Salsemanager:: settarget(int a){
		this->target=a;
	}
	double Salsemanager::getincentive(){
		return this->incentive;
	}
	int Salsemanager:: gettarget(){
		return this->target;
	}
	Salsemanager::Salsemanager():Employee(){
		

		this->incentive=0.00;
		this->target=00;
	}
   Salsemanager::Salsemanager(int id,char*name,double salary,double incentive ,int target):Employee(id,name,salary){
   	                                           
	   this->incentive=incentive;
	   this->target=target;
	}	
	void Salsemanager::display(){
   	 Employee::display();
   	 
     cout<<"\n incentiv = "<<this->incentive;
     cout<<"\n target = "<<this->target;
   }
   	double Salsemanager::cal_salary(){
		return this->getsalary()+this->incentive;
	}