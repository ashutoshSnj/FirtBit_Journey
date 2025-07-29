using namespace std;
#include<iostream>
#include<string.h>
struct Vehicle{
	char modelname[30];
	double price;
	char colour[20];
	int yearofmanu;
    virtual void display(){
    	cout<<"Model name = "<<this->modelname<<endl;
    	cout<<"price = "<<this->price<<endl;
    	cout<<"colour = "<<this->colour<<endl;
    	cout<<"Year of manufacturing = "<<this->yearofmanu<<endl;
	}
	void setmodelname(char*ptr){
		strcpy(this->modelname,ptr);
	}
	void setprice(double a){
		this->price=a;
	}
	void setcolour(char*ptr){
		strcpy(this->colour,ptr);
	}
	void setyearofmanu(int a){
		this->yearofmanu;
	}
	char* getmodelname(){
		return this->modelname;
	}
	double getprice(){
		return this->price;
		}
	char* getcolour(){
		return this->colour;
	}
	int getyearofmanu(){
		return this->yearofmanu;
	}
	Vehicle(){
		strcpy(this->modelname,"not given");
		this->price=0.0;
		strcpy(this->colour,"not give");
		this->yearofmanu=0000;
	}
	Vehicle(char*str,double a,char*ptr,int b){
		strcpy(this->modelname,str);
		this->price=a;
		strcpy(this->colour,ptr);
		this->yearofmanu=b;
	} 
	virtual void brake() {
        cout<<"Applying brakes."<<endl;
    }		
};//vehicle end here
struct Car:public Vehicle{
	int no_of_airbag;
	int no_of_ac;
	void display(){
          Vehicle::display();
    	cout<<"no of airbag = "<<this->no_of_airbag<<endl;
    	cout<<"no of ac = "<<this->no_of_ac<<endl;
		}
		void setno_of_airbag(int a){
			this->no_of_airbag=a;
		}
		void setno_of_ac(int b){
			this->no_of_ac;
		}
		int getno_of_airbag(){
			return this->no_of_airbag;
		}
		int getno_of_ac(){
			return this->no_of_ac;
		}
		Car():Vehicle(){
			this->no_of_airbag=0;
			this->no_of_ac=0;
		}
			Car(char*modelname,double price,char*colour,int year,int airbag,int ac):Vehicle(modelname,price,colour,year){
			this->no_of_airbag=airbag;
			this->no_of_ac=ac;
		}
		void brake(){
        cout<<"Activating drum brake."<<endl;
    }
			
};
 struct Bick:public Vehicle{
 	int no_of_stand;
 	void display(){
    	Vehicle::display();
    	cout<<"no of stand = "<<this->no_of_stand<<endl;
	}
	void setno_of_stand(int a){
		this->no_of_stand=a;
	}
	int getno_of_stand(){
		return this->no_of_stand;
	}
	Bick():Vehicle(){
		this->no_of_stand=0;
	}
		Bick(char*modelname,double price,char*colour,int year,int stand):Vehicle(modelname,price,colour,year){
		this->no_of_stand=stand;
	}
	void brake(){
        cout<<"Activating disc brake."<<endl;
    }
	
 };// bick end here
 struct Bus:public Vehicle{
 	char type_of_bus[20];
 void display(){
    	Vehicle::display();
    	cout<<"type of bus(city bus/school bus/luxury coach = "<<this->type_of_bus<<endl;
	}
	void settype_of_bus(char*str){
		strcpy(this->type_of_bus,str);
	}
	char* gettype_of_bus(){
		return this->type_of_bus;
	}
	Bus():Vehicle(){
		strcpy(this->type_of_bus,"not given");
	}
	Bus(char*modelname,double price,char*colour,int year,char*bustype):Vehicle(modelname,price,colour,year){
		strcpy(this->type_of_bus,bustype);
	}
	void brake(){
        cout<<"Activating air brake."<<endl;
    }

 };
int main(){
	Vehicle *ptr;
	Car v2("suv",85212.5,"red",2002,4,2);
	ptr=&v2;
	ptr->display();
	ptr->brake();
	
	

	Bick B1("tvs Appache",150000,"black",2024,2);
	ptr=&B1;
	ptr->display();
	ptr->brake();
	

	Bus S1("Tata",852365,"white",2019,"Schoole bus");
	ptr=&S1;
	ptr->display();
	ptr->brake();
	
}
