using namespace std;
#include<iostream>
struct Defence{
    double budget; 
    char headquarters[50];  
    int establishment_year;
    void display(){
        cout<<"\nBudget = " << this->budget;
        cout<<"\nHeadquarters Location = "<<this->headquarters;
        cout<<"\nYear of Establishment = "<<this->establishment_year;
    }
    
    void setbudget(double a) {
        this->budget = a;
    }

    void setHeadquarters( char*str) {
        strcpy(this->headquarters, str);
    }

    void setestablishment(int a) {
        this->establishment_year= a;
    }
    double setbudget() {
        return this->budget;
    }

    char* getHeadquarters() {
        return this->headquarters;
    }

    int getestablishment() {
        return this->establishment_year;
    }
    Defence() {
        this->budget = 00;
        strcpy(this->headquarters,"not given");
        this->establishment_year= 00;
    }
    Defence(double budget, char*headqurtez, int year) {
        this->budget = budget;
        strcpy(this->headquarters,headqurtez);
        this->establishment_year= year;
    }
};//defence end here
struct Army:public Defence {
    int soldiers;  
    int tanks;
	 void display(){
        Defence::display();
        cout<<"\nNumber of Soldiers = "<< this->soldiers;
        cout<<"\n Tanks = "<< this->tanks;
    }
      void setsoldiers(int a) {
        this->soldiers = a;
    }

    void settanks(int a) {
        this->tanks=a;
    }
    int getsoldiers() {
        return this->soldiers;
    }

    int gettanks() {
        return this->tanks;
    }
    Army():Defence(){
    	this->soldiers=0;
    	this->tanks=0;
	}
	Army(double budget, char*headqurtez, int year,int soldiers,int tank):Defence(budget,headqurtez,year){
		  this->soldiers=soldiers;
		  this->tanks=tank;
	}
};//army end here
struct Navy:public Defence {
    int ships;  
    int submarines;
     void display(){
       Defence::display();
        cout << "\nNumber of Ships = " << this->ships;
        cout << "\nNumber of Submarines = " << this->submarines;
    }
    void setships(int a) {
        this->ships = a;
    }

    void setsubmarines(int a) {
        this->submarines = a;
    }
    
     int getships() {
        return this->ships;
    }

    int getsubmarines() {
        return this->submarines;
    }
    Navy():Defence(){
    	this->ships=0;
    	this->submarines=0;
	}
	Navy(double budget, char*headqurtez, int year,int ship,int submarines ):Defence(budget,headqurtez,year){
		this->ships=ship;
    	this->submarines=submarines;
	}
	
    
}; //navy end here
struct Airforce:public Defence {
    int num_aircrafts; 
    int num_airbases;
    void display(){
         Defence::display();
        cout<<"\nNumber of Aircrafts = "<<this->num_aircrafts;
        cout<<"\nNumber of Airbases = "<<this->num_airbases;
    }
    void setaircrafts(int a) {
        this->num_aircrafts = a;
    }

    void setairbases(int a) {
        this->num_airbases = a;
    }
     int getaircrafts() {
        return this->num_aircrafts;
    }

    int getairbases() {
        return this->num_airbases;
    }
    Airforce():Defence(){
    	this-> num_aircrafts=0;
    	this->num_airbases=0;
	}
Airforce(double budget, char*headqurtez, int year,int aircra,int airbase ):Defence(budget,headqurtez,year){
		this-> num_aircrafts=aircra;
    	this->num_airbases=airbase;
    }
};
int main(){
  Army a;
  Army a1(78458,"delhi",1949,45,5);
  a.display();
  a1.display();
  
  Navy n;
  Navy n1(45222,"mumbai",1950,89,65);
  n.display();
  n1.display();
  
  Airforce S;
  Airforce S1(458665,"pune",7854,78,65);
  S.display();
  S1.display();
}

  
  

