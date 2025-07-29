using namespace std;
#include<iostream>
#include<string.h>

struct SalesManager{
	int id;
	char name[20];
   float salary;
   int  incentive[3];
   int target[4];
   void display(){
   	cout<<"\n ID = "<<this->id;
	cout<<"\n Name = "<<this->name;
	cout<<"\n salary = "<<this->salary;
	cout<<"\n  incentive is ";
    for(int i=0;i<3;i++){
    	cout<<"\n"<<this->incentive[i];
	}
	cout<<"\n  Target is ";
	for(int i=0;i<4;i++){
    	cout<<"\n"<<this->target[i];
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
	void setincentive(){
		cout<<"Enter the incentive = ";
		int temp;
		for(int i=0;i<3;i++){
			cin>>temp;
			this->incentive[i]=temp;
		}
	}
	void settarget(){
		cout<<"Enter the target = ";
		int temp;
		for(int i=0;i<4;i++){
			cin>>temp;
			this->target[i]=temp;
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
	
		int* getincentive(){
		return this->incentive;
	}
	int* gettarget(){
		return this->target;
	}
   SalesManager (){
   	this->id=0;
	   strcpy(this->name,"not given");	
	   this->salary=0;
	   for(int i=0;i<3;i++){
	   this->incentive[i]=0;
       }
     for(int i=0;i<3;i++){
	   this->target[i]=0;
   }
}
 SalesManager (int a,char*str,float b,int*arr,int*brr){
   	this->id=a;
	   strcpy(this->name,str);	
	   this->salary=b;
	   for(int i=0;i<3;i++){
	   this->incentive[i]=arr[i];
       }
     for(int i=0;i<4;i++){
	   this->target[i]=brr[i];
   }
}
   
	
};
int main(){
	 SalesManager str;
	 str.setid(1);
	 str.setname("Ashutosh");
	 str.setsalary(85239);
	 str.setincentive();
	 str.settarget();
	 str.display();
	 int arr[3]={1255,785,4584};
	 int brr[4]={12,5,8,4};
	 SalesManager str1(2,"Shelke",74585,arr,brr);
	 str1.display();
	 
	//
}