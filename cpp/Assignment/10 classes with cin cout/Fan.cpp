using namespace std;
#include<iostream>
#include<string.h>
struct Fan{
	char model_name[20];
	char colour[20];
	double price;
	int no_of_blade;
	int rpm;
	void Display(){
		cout<<"\nmodel name =  "<<this->model_name;
		cout<<"\n colour  =  "<<this->colour;
		cout<<"\n price =  "<<this->price;
		cout<<"\n no of blad =  "<<this->no_of_blade;
		cout<<"\n Fan rpm =  "<<this->rpm;
	}
	void setmodelname(const char*chr){
		strcpy(this->model_name,chr);
	}
	void setcolour(const char*chr){
		strcpy(this->colour,chr);
	}
	void setprice(double a){
		this->price=a;
	}
	void setnoofblade(int a){
		this->no_of_blade=a;
	}
	void setrpm(int a){
		this->rpm=a;
	}
	char* getmodelname(){
		return this->model_name;
	}
	char* getcolour(){
		return this->colour;
	}
	double getprice(){
		return this->price;
	}
	 int getnoofblade(){
		return this->no_of_blade;
	}
	int getrpm(){
		return this->rpm;
	}
	Fan(){
		strcpy(this->model_name,"not given");
		strcpy(this->colour,"not given");
		this->price=0;
		this->no_of_blade=0;
		this->rpm=0;
		
	}
	Fan(char*str,char*chr,int a,int b,int c){
		strcpy(this->model_name,str);
		strcpy(this->colour,chr);
		this->price=a;
		this->no_of_blade=b;
		this->rpm=c;
		
	}
	
	
	
}; 
    main(){
    	Fan F,F1("Amron","White",1200,3,452);
    	F.setmodelname("Sysca");
    	F.setcolour("black");
    	F.setprice(1256);
    	F.setnoofblade(3);
    	F.setrpm(800);
    	F.Display();
        F1.Display();
	}