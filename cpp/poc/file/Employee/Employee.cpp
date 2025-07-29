
#include"Employe.h"
void Employee::display(){
   		cout<<"\n ID = "<<this->id;
	cout<<"\n Name = "<<this->name;
	cout<<"\n salary = "<<this->salary;
     
   }
   void Employee::setid(int a){
		this->id=a;
	}
	void Employee:: setname(char* ass){
		strcpy(this->name,ass);
	}
	void Employee::setsalary(double a){
		
        this->salary=a;
	}
	int Employee::getid(){
		return this->id;
	}
	  char*Employee:: getname(){
	  	return this->name;
	  }
	  	double Employee::getsalary(){
		return this->salary;
	}
    double Employee::cal_salary(){
		return this->salary;
	}
	
	Employee::Employee(){
	//	cout<<"Employee Defoult counstructor call "<<endl;
	   this->id=0;
	   strcpy(this->name,"not given");	
	   this->salary=0;
	}
	Employee::Employee(int id,char*name,double salary){
	//	cout<<"Employee parametrize counstructer call"<<endl;
	   this->id=id;
	   strcpy(this->name,name);	
	   this->salary=salary;
	}