#include<stdio.h>
#include<string.h>

struct Hr{
	int id;
	char name[20];
   float salary;
   int commission;
   void display(){
   	printf("\n ID = %d",id);
	printf("\n Name = %s",name);
	printf("\n salary = %f",salary);
	printf("\n commission is =%d",commission);
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
	void setcommission(int a){
	
	this->commission=a;
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
	
		int getcommission(){
		return this->commission;
	}
   
	
};

int main(){
	 Hr str;
	 str.setid(2);
	 str.setname("Ashutosh");
	 str.setsalary(8523);
	 str.setcommission(852);
	 str.display();
}