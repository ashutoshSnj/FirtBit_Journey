#include<stdio.h>
#include<string.h>
struct Fan{
	char model_name[20];
	char colour[20];
	double price;
	int no_of_blade;
	int rpm;
	void Display(){
		printf("\nmodel name = %s ",this->model_name);
		printf("\n colour  = %s ",this->colour);
		printf("\n price = %lf ",this->price);
		printf("\n no of blad = %d ",this->no_of_blade);
		printf("\n Fan rpm = %d ",this->rpm);
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
	
	
	
}; 
    main(){
    	Fan F;
    	F.setmodelname("Sysca");
    	F.setcolour("black");
    	F.setprice(1256);
    	F.setnoofblade(3);
    	F.setrpm(800);
    	F.Display();

	}