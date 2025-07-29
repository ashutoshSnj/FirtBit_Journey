#include<stdio.h>
#include<string.h>

struct Employee{
	int id;
	char name[20];
   float salary;
   void display(){
   		printf("\n ID = %d",id);
	printf("\n Name = %s",name);
	printf("\n salary = %f",salary);
     
   }
   void setid(int a){
		this->id=a;
	}
	void setname(char* ass){
		strcpy(this->name,ass);
	}
	void setsalary(float a){
		
        this->salary=a;
	}
	int getid(){
		return this->id;
	}
	  char* getname(){
	  	return this->name;
	  }
	  	float getsalary(){
		return this->salary;
	}
	
};

 main(){
	 Employee s1;
	
	s1.setid(1);
	s1.setname("Ashutosh");
	s1.setsalary(85522);
	s1.display();
	
	}

	


  
