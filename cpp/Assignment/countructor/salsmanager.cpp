#include<stdio.h>
#include<string.h>

struct SalesManager{
	int id;
	char name[20];
   float salary;
   int  incentive;
   int target;
   void display(){
   	printf("\n ID = %d",this->id);
	printf("\n Name = %s",this->name);
	printf("\n salary = %f",this->salary);
    printf("\n incentive is = %d",this->incentive);
	printf("\n  Target is = %d",this->target);  
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
	  	float getsalary(){
		return this->salary;
	}
	
		int getincentive(){
		return this->incentive;
	}
	int gettarget(){
		return this->target;
	}
   SalesManager (){
   	this->id=0;
	   strcpy(this->name,"not given");	
	   this->salary=0;
	   this->incentive=0;
	   this->target=0;
}
 SalesManager (int a,char*str,float b,int arr,int brr){
   	this->id=a;
	   strcpy(this->name,str);	
	   this->salary=b;
	   this->incentive=arr;
	   this->target=brr;
   
}
   
	
};
int main(){
	 SalesManager str;
	 str.setid(1);
	 str.setname("Ashutosh");
	 str.setsalary(85239);
	 str.setincentive(5421);
	 str.settarget(99854);
	 str.display();
	
	 SalesManager str1(2,"Shelke",74585,98564,7854);
	 str1.display();
	 
	//
}