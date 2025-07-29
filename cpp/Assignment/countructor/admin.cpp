#include<stdio.h>
#include<string.h>

struct Admin{
	int id;
	char name[20];
      double salary;
   int allowance;
   void display(){
   	printf("\n ID = %d",this->id);
	printf("\n Name = %s",this->name);
	printf("\n salary = %lf",this->salary);
	printf("\n allowance is= %d",this->allowance);
    
}
  void setid(int i){
  	   this->id=i;
 }
   void setname(const char*chr){
   strcpy(this->name,chr);
   }
   void setsalary(double s){
   	this->salary=s;
   }
   void setallowance(int a){
   		this->allowance=a;
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
    int getallowance(){
   	return this->allowance;
   }
    Admin(){
    	this->id=0;
    	strcpy(this->name,"not given");
    	this->salary=0;
        this->allowance=0;
		
	}
	Admin(int a,char*str,int b,int arr){
		this->id=a;
		strcpy(this->name,str);
		this->salary=b;
    	this->allowance=arr;	
	}
   
};

 main(){
	 Admin a1;
	       a1.setid(1);
	       a1.setname("shelke");
           a1.setsalary(12552);
        a1.setallowance(4584);
		a1.display();
	
	      Admin a(12,"ashutosh",85263,78547);
	      a.display();
	}


	


  
