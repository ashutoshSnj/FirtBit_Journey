using namespace std;
#include<iostream>
#include<string.h>
struct HomeAppliance{
	char company_nm[20];
	char colour[20];
	double weight;
	double price;
	void display(){
		cout<<"Company Name = "<<this->company_nm<<endl;
		cout<<"Colour = "<<this->colour<<endl;
		cout<<"Weight = "<<this->weight<<endl;
		cout<<"Price = "<<this->price<<endl;
	}
	void setcompany_name(char*str){
		strcpy(this->company_nm,str);
	}
	void setcolour(char*str){
		strcpy(this->colour,str);
	}
	void setweight(double a){
		this->weight=a;
	}
	void setprice(double a){
		this->price=a;
	}
	char* getcompany_name(){
		return this->company_nm;
	}
	char* getcolour(){
		return this->colour;
	}
	  double getweight(){
	  	return this->weight;
	  }
	  double getprice(){
	  	return this->price;
	  }
	  HomeAppliance(){
	  	strcpy(this->company_nm,"not given");
	  	strcpy(this->colour,"not given");
	  	this->weight=00;
	  	this->price=00;
	  }
	  HomeAppliance(char*str,char*str2,double a,double b){
	  	cout<<"ha parametri call"<<endl;
	  	strcpy(this->company_nm,str);
	  	strcpy(this->colour,str2);
	  	this->weight=a;
	  	this->price=b;
	  }
	
};// HomeAppliance end here
struct WashingMachine:public HomeAppliance{
	int water_con;
	int capacity;
	void setwater_con(int a){
		this->water_con=a;
	}
	void setcapacity(int a){
		this->capacity=a;
	}
	int getwater_con(){
		return this->water_con;
	}
	 int getcapacity(){
	  	return this->capacity;
	  }
	  WashingMachine(){
	  	this->water_con=0;
	  	this->capacity=0;
	  }
	  WashingMachine(char*str,char*str2,double a,double b,int c,int d):HomeAppliance(str,str2,a,b){
	  	cout<<"wa parameterice call"<<endl;
	  	this->water_con=c;
	  	this->capacity=d;
	  }
	  void display(){
	  	HomeAppliance::display();
	  	cout<<"Water consumption = "<<this->water_con<<endl;
	  	cout<<"Capacity = "<<this->capacity<<endl;
	  }	
};// WashingMachine end here
struct Refrigerator:public HomeAppliance{
	float energyrating;
	int no_ofdoors;
	 void display(){
	HomeAppliance::display();
	cout<<"Energy Rating = "<<this->energyrating<<endl;
	cout<<"No of Doors = "<<this->no_ofdoors<<endl; 	
	 }
	void setenergyrating(float a){
	 	this->energyrating=a;
	 }
	 void setno_ofdoors(int a){
	 	this->no_ofdoors=a;
	 }
	  float getenergyrating(){
	 	return this->energyrating;
	 }
	   int setno_ofdoors(){
	 	return this->no_ofdoors;
	 }
	 Refrigerator(){
	 	this->energyrating=0;
	 	this->no_ofdoors=0;
	 }
	 Refrigerator(char*str,char*str2,double a,double b,float c,int d):HomeAppliance(str,str2,a,b){
	 	this->energyrating=c;
	 	this->no_ofdoors=d;
	 }
	
};//Refrigerator end here
struct Microwave:public HomeAppliance{
	int cookingpower;
void setcookingpower(int a){
		this->cookingpower=a;
	}
	int getcookingpower(){
		return this->cookingpower;
	}
	Microwave(){
		this->cookingpower=0;
	}
	Microwave(char*str,char*str2,double a,double b,int c):HomeAppliance(str,str2,a,b){
		this->cookingpower=c;
	}
	void display(){
		HomeAppliance::display();
		cout<<"Cooking power = "<<this->cookingpower<<endl;
	}
	
};


int main(){
 WashingMachine W;
 WashingMachine W1("qulitybuild","Black",263,4523,5,8);
 W.display();
 W1.display();
	
Refrigerator R;
Refrigerator R1("samsung","Red",785,9852,4.3f,2);
R.display();
R1.display();


Microwave M;
Microwave M1("freshfood","white",125,45896,12);
 M.display();
 M1.display();

  
}