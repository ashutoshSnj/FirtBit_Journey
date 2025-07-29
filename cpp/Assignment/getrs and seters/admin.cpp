#include<stdio.h>
#include<string.h>

struct Admin{
	int id;
	char name[20];
      double salary;
   int allowance;
   void Display(){
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
   void setallowance(double a){
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
    double getallowance(){
   	return this->allowance;
   }
   
   
};

 main(){
	 Admin a1;
	       a1.setid(1);
	       a1.setname("shelke");
           a1.setsalary(12552);
        a1.setallowance(84557);
		a1.Display();
		printf("%d",a1.getid());
		printf("\n%s",a1.getname());
		printf("\n%lf",a1.getsalary());
		printf("\n%lf",a1.getallowance());
	
	}


	


  
