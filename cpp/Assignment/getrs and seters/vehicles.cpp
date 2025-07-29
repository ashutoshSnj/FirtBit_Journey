#include<stdio.h>
#include<string.h>
struct Vehicles{
	int model_no;
	char model_name[20];
	double price;
	void display(){
		printf("\nModel no is = %d",this->model_no);
		printf("\nModel name is = %s",this->model_name);
		printf("\nModel price is = %lf",this->price);
	
	}
	void setmodelno(int a){
		this->model_no=a;
	}
	void setmodelname(char*chr){
		strcpy(this->model_name,chr);
	}
	void setprice(double a){
		this->price=a;
	}
	  int getmodelno(){
	  	return this->model_no;
	  }
	 char* getmodelname(){
	  	return this->model_name;
	  }
	 double  getprice(){
	  	return this->price;
	  }
	
};

 main(){
	Vehicles v;
       v.setmodelno(85);
       v.setmodelname("xuv");
       v.setprice(856585);
       v.display();
}