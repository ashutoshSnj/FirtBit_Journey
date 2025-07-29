using namespace std;
#include<iostream>
#include<string.h>

class Employee{
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
    virtual  double cal_salary(){
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
		return this->getsalary()+this->getincentive();
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
 void allemployeedetails(Employee* ep){
 	//cout<<"id is "<<ep->getid()<<endl;//not virtual function
 	//cout<<"total salry is "<<ep->cal_salary()<<endl;//virtual function
 	//	cout<<"commision is "<<ptr->getcommission()<<endl;
 //	cout<<"incentive "<<ep->getcommision(); 
	 //this function we cannot acces becoze they are not present in base class 
	 // in base class so error is 	[Error] 'class Employee' has no member named 'getcommision'
	 //we need to downcasting becose ep is employe pointer and our object is hr so we do 
	 //downcasing 
	Hr *ptr=dynamic_cast<Hr*>(ep);
	if(ptr!=NULL){
		cout<<"commision is "<<ptr->getcommission()<<endl;
		//	cout<<"total salry is "<<ptr->cal_salary()<<endl;
	}
	 Admin *a=dynamic_cast<Admin*>(ep);
	 if(a!=NULL){
	 //	cout<<"Alloeance is "<<a->getallowance()<<endl;	
	 }
	 Salsemanager *sal=dynamic_cast<Salsemanager*>(ep);
	 if(sal!=NULL){
	 	//cout<<"incentive is "<<sal->getincentive()<<endl;
	 	//cout<<"target is "<<sal->gettarget()<<endl;
	 }
	       ptr=(Hr*)ep;
	       cout<<"commision is "<<ptr->getcommission()<<endl;
 	/// this is a blind cast 
 }
int main(){
Employee*ep;
  Hr e(12,"ashutosh",4,894);
 // Hr *h=&e;
//  h->display();
  //internalyy like h->display(&e addres of object which is  pointer point )
  ep=&e;
  ep->display();
  // hear we do a upcasting becose ep is employ pointer and e is hr object this ep is generic or virtual pointer 
  //cout<<ep->getid();
  // recall the virtual pointer algoritham
  allemployeedetails(ep);
  Admin s(1,"slugvb",9786,1000);
    ep=&s;
  allemployeedetails(ep);
  Salsemanager a(12,"shelke",8654,7854,89566);
  ep=&a;
 allemployeedetails(ep);
}