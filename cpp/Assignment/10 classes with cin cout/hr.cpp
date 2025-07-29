using namespace std;
#include<iostream>
#include<string.h>

struct Hr{
	int id;
	char name[20];
   float salary;
   int commission[3];
   void display(){
   	cout<<"\n ID = "<<id;
	cout<<"\n Name = "<<name;
	cout<<"\n salary = "<<salary;
	cout<<"\n commission is";
    for(int i=0;i<3;i++){
    	cout<<"\n",commission[i];
	}
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
	void setcommission(){
		cout<<"Enter the commission = ";
		int temp;
		for(int i=0;i<3;i++){
			cin>>temp;
			this->commission[i]=temp;
		}
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
	
		int* getcommission(){
		return this->commission;
	}
   Hr(){
   	this->id=0;
	   strcpy(this->name,"not given");	
	   this->salary=0;
	   for(int i=0;i<3;i++)
	   this->commission[i]=0;
   }
   Hr(int a,char*chr,int b,int*arr){
   	this->id=a;
	   strcpy(this->name,chr);	
	   this->salary=b;
	   for(int i=0;i<3;i++)
	   this->commission[i]=arr[i];
   }
	
};

int main(){
	 Hr str;
	 int ptr[3]={859,878,854};
	 Hr str1(2,"Shelke",7845,ptr);
	 str.setid(1);
	 str.setname("Ashutosh");
	 str.setsalary(8523);
	 str.setcommission();
	 str.display();
	 str1.display();
	 
}