using namespace std;
#include<iostream>
#include<string.h>

struct Employee{
	int id;
	char name[20];
   double salary;
   void display(){
   		cout<<"ID = "<<this->id<<endl;
	cout<<"Name = "<<this->name<<endl;
	cout<<"salary = "<<this->salary<<endl;
     
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

	   this->id=0;
	   strcpy(this->name,"not given");	
	   this->salary=0;
	}
	Employee(int id,char*name,double salary){
		
	   this->id=id;
	   strcpy(this->name,name);	
	   this->salary=salary;
	}
	double cal_sal(){
		return this->getsalary();
	}
};// Employ End here
struct Salsemanager:public Employee{
	
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
		

		this->incentive=0.00;
		this->target=00;
	}
   Salsemanager(int id,char*name,double salary,double incentive ,int target):Employee(id,name,salary){
   	                                
   	 	
	   this->incentive=incentive;
	   this->target=target;
	}	
	void display(){
   	 Employee::display();
   	 
     cout<<"incentiv = "<<this->incentive<<endl;
     cout<<"target = "<<this->target<<endl;
   }
   double cal_sal(){
		return this->getsalary()+this->getincentive();
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
		this->commission=0;
	}
	Hr(int id,char* name,double salary,int commission):Employee(id,name,salary){
	
		this->commission=commission;
	}
	void display(){
		Employee::display();
	cout<<"commission = "<<this->commission<<endl;
	}
	double cal_sal(){
		return this->getsalary()+this->getcommission();
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
	 
	 	this->allowance=0;
	 }
	 Admin(int id,char* name,double salary,int allowance):Employee(id,name,salary){
	
	 	this->allowance=allowance;
	 }
	 void display(){
	 	Employee::display();
	cout<<"allowance = "<<this->allowance<<endl;	
	 }
	 double cal_sal(){
		return this->getsalary()+this->getallowance();
	}
 }; //Admin end here
int main(){
Salsemanager m;
Salsemanager m1(1,"Ashutoh",5236,452,6);

m.display();
cout<<"total salary of salsmanager m is = "<<m.cal_sal()<<endl;
m1.display();
cout<<"total salary of salsmanager m1 is = "<<m1.cal_sal()<<endl;

Hr h;
Hr h1(2,"Sanjay",45821,859);
 h.display();
 cout<<"total salary of hr h is = "<<h.cal_sal()<<endl;
h1.display();
cout<<"total salary of hr h1 is = "<<h1.cal_sal()<<endl;

Admin a;
Admin a1(3,"Shelke",45826,45236);
a.display();
cout<<"total salary of Admin a is = "<<a.cal_sal()<<endl;
a1.display();	
cout<<"total salary of Admin a1 is = "<<a1.cal_sal()<<endl;
}