using namespace std;
#include<iostream>
#include<string.h>

struct Admin{
	int id;
	char name[20];
      double salary;
   int allowance[3];
   void Display(){
   	cout<<"\n ID = "<<this->id;
	cout<<"\n Name = "<<this->name;
	cout<<"\n salary = "<<this->salary;
	cout<<"\n allowance is";
    for(int i=0;i<3;i++){
    	cout<<"\n"<<this->allowance[i];
   }
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
   void setallowance(){
   	int temp;
   	cout<<"Enter the allowance = ";
   	for(int i=0;i<3;i++){
   		cin>>temp;
   		this->allowance[i]=temp;
	   }
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
    int* getallowance(){
   	return this->allowance;
   }
    Admin(){
    	this->id=0;
    	strcpy(this->name,"not given");
    	this->salary=0;
    	for(int i=0;i<3;i++){
    		this->allowance[i]=0;
		}
	}
	Admin(int a,char*str,int b,int*arr){
		this->id=a;
		strcpy(this->name,str);
		this->salary=b;
		for(int i=0;i<3;i++){
    		this->allowance[i]=arr[i];
		}
	}
   
};

 main(){
	 Admin a1;
	       a1.setid(1);
	       a1.setname("shelke");
           a1.setsalary(12552);
        a1.setallowance();
		a1.Display();
		int arr[3]={800,450,632};
	
	      Admin a(12,"ashutosh",85263,arr);
	      a.Display();
	}


	


  
