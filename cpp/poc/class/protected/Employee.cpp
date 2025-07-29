using namespace std;
#include<iostream>
#include<string.h>

class Employee{
	protected:
	int id;
	char name[20];
   double salary;
   public:
   virtual void display(){
   		cout<<"\n ID = "<<this->id;
	cout<<"\n Name = "<<this->name;
	cout<<"\n salary = "<<this->salary;
     
   }
   void setid(int a){
		this->id=a;
	}
	void setname(char* ass){
		strcpy(this->name,ass);
	}
	void setsalary(double a){
		
        this->salary=a;
	}
	int getid(){
		return this->id;
	}
	  char* getname(){
	  	return this->name;
	  }
	  	double getsalary(){
		return this->salary;
	}
    virtual double cal_salary(){
		return this->salary;
	}
	
	Employee(){
	//	cout<<"Employee Defoult counstructor call "<<endl;
	   this->id=0;
	   strcpy(this->name,"not given");	
	   this->salary=0;
	}
	Employee(int id,char*name,double salary){
	//	cout<<"Employee parametrize counstructer call"<<endl;
	   this->id=id;
	   strcpy(this->name,name);	
	   this->salary=salary;
	}
};// Employ End here
class Salsemanager:public Employee{
	// this is frist step is a relationship
	double incentive;
	int target;
	public:
	void setincentive(double a){
		this->incentive=a;
	}
		void settarget(int a){
		this->target=a;
	}
	double getincentive(){
		return this->incentive;
	}
	int gettarget(){
		return this->target;
	}
	Salsemanager():Employee(){
		

		this->incentive=0.00;
		this->target=00;
	}
   Salsemanager(int id,char*name,double salary,double incentive ,int target):Employee(id,name,salary){
   	                                           
	   this->incentive=incentive;
	   this->target=target;
	   
	}
		
	void display(){
   	 Employee::display();
   	 
     cout<<"\n incentiv = "<<this->incentive;
     cout<<"\n target = "<<this->target;
   }
   	double cal_salary(){
		return this->salary+this->incentive;
	}
};// salse manager end here
class Hr:public Employee{
	double  commission;
	public:
 void setcommission(double a){
		this->commission=a;	
	}
 double getcommission(){
		return this->commission;
	}
	Hr():Employee(){
		
		this->commission=0;
	}
	Hr(int id,char* name,double salary,double commission):Employee(id,name,salary){
		this->commission=commission;
	}
	void display(){
		Employee::display();
	cout<<"\n commission = "<<this->commission<<endl;
	}
	double cal_salary(){
		return this->getsalary()+this->getcommission();
	}
	
};// Hr ends here
 class Admin:public Employee{
 	double allowance;
 	public:
 	void setallowance(double a){
 		this->allowance=a;
	 }
	 double getallowance(){
	 	return this->allowance;
	 }
	 Admin():Employee(){
	 
	 	this->allowance=0;
	 }
	 Admin(int id,char* name,double salary,double allowance):Employee(id,name,salary){
	
	 	this->allowance=allowance;
	 }
	 void display(){
	 	Employee::display();
	cout<<"\n allowance = "<<this->allowance<<endl;	
	 }
	 double cal_salary(){
		return this->getsalary()+this->getallowance();
	}
 }; //Admin end here
int main(){
	Employee a(45,"shelke",78546);
	a.display();
//	a.id=89;
Employee*ep;
Employee e1(11,"Ashutosh",200000);
ep=&e1;
//ep->display();

Salsemanager S(12,"virat",52635,45236,58);
ep=&S;
 //ep->display();
 //cout<<"total salary of Salsemanager is = "<<ep->cal_salary()<<endl;


Admin A(13,"sachin",42563,52365);
ep=&A;
//ep->display();
//cout<<"total salary of admin is = "<<ep->cal_salary()<<endl;
 
 Hr H(14,"virat",1256,5236);
 ep=&H;
 ep->display();
 cout<<"total salary of Hr is = "<<ep->cal_salary()<<endl;
 
}