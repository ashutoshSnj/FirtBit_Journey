#include<stdio.h>
#include<string.h>

struct SalesManager{
	int id;
	char name[20];
   int salary;
   int  incentive;
   int target;
   void display(){
   	printf("\n ID = %d",this->id);
	printf("\n Name = %s",this->name);
	printf("\n salary = %d",this->salary);
	printf("\n incentive is =%d",this->incentive);
	printf("\n Target is = %d",this->target);
   
   }
    void setid(int a){
		this->id=a;
	}
	void setname(char* ass){
		strcpy(this->name,ass);
	}
	void setsalary(int a){
		
        this->salary=a;
	}
	void setincentive(int a){
			this->incentive=a;
		}
	
	void settarget(int a){
	
			this->target=a;
		}
	
	int getid(){
		return this->id;
	}
	  char* getname(){
	  	return this->name;
	  }
	  	int getsalary(){
		return this->salary;
	}
	
		int getincentive(){
		return this->incentive;
	}
	 int gettarget(){
		return this->target;
	}
   
	
};
int main(){
	 SalesManager str;
	 str.setid(2);
	 str.setname("Ashutosh");
	 str.setsalary(8523);
	 str.setincentive(965);
	 str.settarget(89754);
	 
	 str.display();
	
	//
}