using namespace std;
#include<iostream>
#include<string.h>

struct Employee{
	int id;
	char name[20];
   double salary;
   void display(){
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
	
	Employee(){
		cout<<"Employee Defoult counstructor call "<<endl;
	   this->id=0;
	   strcpy(this->name,"not given");	
	   this->salary=0;
	}
	Employee(int id,char*name,double salary){
		cout<<"Employee parametrize counstructer call"<<endl;
	   this->id=id;
	   strcpy(this->name,name);	
	   this->salary=salary;
	}
};// Employ End here
struct Salsemanager:public Employee{
	// this is frist step is a relationship
	double incentive;
	int target;
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
		// this step optinal not nesessary
		cout<<"Salsmanager defoult constructer call"<<endl;
		this->incentive=0.00;
		this->target=00;
	}
   Salsemanager(int id,char*name,double salary,double incentive ,int target):Employee(id,name,salary){
   	                                           // step 2 call a emplyee parametrize counstrectr call
   	                                           // parameter initialize list
   	 	cout<<"Salsmanager parametrize constructer call"<<endl;
	   this->incentive=incentive;
	   this->target=target;
	}	
	void display(){
   	 Employee::display();
   	 // step 3 this is not compalsary whenevwe we need it then use it
     cout<<"\n incentiv = "<<this->incentive;
     cout<<"\n target = "<<this->target;
   }
};// salse manager end here
struct Hr:public Employee{
	int commission;
 void setcommission(int a){
		this->commission=a;	
	}
 int getcommission(){
		return this->commission;
	}
	Hr():Employee(){
		cout<<"Hr default counstructer call"<<endl;
		this->commission=0;
	}
	Hr(int id,char* name,double salary,int commission):Employee(id,name,salary){
		cout<<"Hr parametrize counstructer call"<<endl;
		this->commission=commission;
	}
	void display(){
		Employee::display();
	cout<<"\n commission = "<<this->commission<<endl;
	}
	
};// Hr ends here
 struct Admin:public Employee{
 	int allowance;
 	void setallowance(int a){
 		this->allowance=a;
	 }
	 int getallowance(){
	 	return this->allowance;
	 }
	 Admin():Employee(){
	 	cout<<"admin defolult counstructer call"<<endl;
	 	this->allowance=0;
	 }
	 Admin(int id,char* name,double salary,int allowance):Employee(id,name,salary){
	 	cout<<"Admin parametrize Counstructer  call"<<endl;
	 	this->allowance=allowance;
	 }
	 void display(){
	 	Employee::display();
	cout<<"\n allowance = "<<this->allowance<<endl;	
	 }
 }; //Admin end here
int main(){
Salsemanager m;
Salsemanager m1(1,"ashutoh",523625,452126,6);
m.display();
m1.display();
Salsemanager *ptr;
ptr=&m1;
ptr->display();

Hr h;
Hr h1(2,"Ashutosh",45821,859);
h.display();
h1.display();

Admin a;
Admin a1(3,"Shelke",45826,45236);
a.display();
a1.display();	
}