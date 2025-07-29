using namespace std;
#include<iostream>
struct Company{
	char name[30];
	char manufacturing[40];
	int yearof_esta;
	int no_ofemp;	
	double turnover;
  virtual void display(){
   	cout<<"Company name = "<<this->name<<endl;
   	cout<<"Manufacturing = "<<this->manufacturing<<endl;
   	cout<<"Year of Established = "<<this->yearof_esta<<endl;
   	cout<<"Employee Count = "<<this->no_ofemp<<endl;
   	cout<<"Turnover = "<<this->turnover<<endl;
   }
  void setname(char*str){
   	strcpy(this->name,str);
   }
   void set_manufacturing(char*str){
   	strcpy(this->manufacturing,str);
   }
   void setyearof_esta(int a){
   	this->yearof_esta=a;
   }
   void setno_ofemp(int a){
   	this->no_ofemp=a;
   }
   void setturnover(int a){
   	this->turnover=a;
   }
   char* getname(){
   	return this->name;
   }
   char* get_manufacturing(){
   	return this->manufacturing;
   }
   int getyearof_esta(){
   	return this->yearof_esta;
   }
   int getno_ofemp(){
   	return this->no_ofemp;
   }
   int getturnover(){
   	return this->turnover;
   }
   Company(){
   	strcpy(this->name,"not give");
   	strcpy(this->manufacturing,"not given");
   	this->yearof_esta=00;
   	this->no_ofemp=00;
   	this->turnover=00;
   }
    Company(char *name,char*manu,int year,int emp,int turn){
   	strcpy(this->name,name);
   	strcpy(this->manufacturing,manu);
   	this->yearof_esta=year;
   	this->no_ofemp=emp;
   	this->turnover=turn;
   }
   	virtual double calculateRevenue(){
        return this-> getturnover()*0.2;
    }
};
struct It_Company:public Company{
	char datacenter[40];
	char techstack[50];
	int ongoing_projects;
	void display(){
		Company::display();
		cout<<"location of datacenters = "<<this->datacenter<<endl;
		cout<<"List of technologies used = "<<this->techstack<<endl;
		cout<<"No of current projects = "<<this->ongoing_projects<<endl;
	}
	void setdatacenter(char*str){
		strcpy(this->datacenter,str);
	}
	void settechstack(char*str){
			strcpy(this->techstack,str);
	}
	void setproject(int a){
		this->ongoing_projects=a;
	}
	char* getdatacenter(){
		return this->datacenter;
	}
	char* gettechstack(){
			return this->techstack;
	}
	int getproject(){
		return this->ongoing_projects;
	}
	It_Company():Company(){
		strcpy(this->datacenter,"not given");
		strcpy(this->techstack,"not given");
		this->ongoing_projects=0;
	}
	It_Company(char *name,char*manu,int year,int emp,int turn,char*center,char*tech,int project):Company(name,manu,year,emp,turn){
		strcpy(this->datacenter,center);
		strcpy(this->techstack,tech);
		this->ongoing_projects=project;
	}
 double calculateRevenue() {
        return this->getturnover()*2.2;
    }	
};
struct ClothManufacturingCompany:public Company{
	char fabricTypes[30];
	int textileWaste;
	void display(){
		Company::display();
		cout<<"Fabric types = "<<this->fabricTypes<<endl;
		cout<<"Textile Waste = "<<this->textileWaste<<endl;
	}
	void setfabric(char *str){
		strcpy(this->fabricTypes,str);
 }
 void setwaste(int a){
 	this->textileWaste=a;
 }
 char* getfabric(){
		return this->fabricTypes;
 }
 int setwaste(){
 	return this->textileWaste;
 }
 ClothManufacturingCompany():Company()
 {
 	strcpy(this->fabricTypes,"not given");
 	this->textileWaste=0;
 }
 ClothManufacturingCompany(char *name,char*manu,int year,int emp,int turn,char*type,int waste):Company(name,manu,year,emp,turn){
 	strcpy(this->fabricTypes,type);
 	this->textileWaste=waste;
 }
double calculateRevenue() {
        return this->getturnover()*1.2;
    }	
};
int main(){
	Company *ptr;
	
	It_Company C("Techbull","Software",2015,45,845964,"pune","Java,spring,mysql",13);
   ptr=&C;
	ptr->display();
	cout<<"Revenue of IT Company = "<<ptr->calculateRevenue()<<endl;

	ClothManufacturingCompany S("Rowdy","Man Cloths",2009,78,784587,"Cotton",100);
ptr=&S;
ptr->display();
cout<<"Revenue of IT Company = "<<ptr->calculateRevenue()<<endl;
	
}