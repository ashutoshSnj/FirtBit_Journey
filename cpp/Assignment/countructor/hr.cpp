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
	printf("\n commission is = %d",this->commission);
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
   Hr(){
   	this->id=0;
	   strcpy(this->name,"not given");	
	   this->salary=0;
	   this->commission=0;
   }
   Hr(int a,char*chr,int b,int arr){
   	this->id=a;
	   strcpy(this->name,chr);	
	   this->salary=b;
	   this->commission=arr;
   }
	
};

int main(){
	 Hr str;
	 Hr str1(2,"Shelke",7845,8754);
	 str.setid(1);
	 str.setname("Ashutosh");
	 str.setsalary(8523);
	 str.setcommission(7854);
	 str.display();
	 str1.display();
}