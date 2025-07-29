using namespace std;
#include<iostream>

class Defence{
    double budget; 
    char headquarters[50];  
    int establishment_year;
    public:
     virtual void display(){
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
    virtual void attack()=0;
};//defence end here
class Army:public Defence {
    int soldiers;  
    int tanks;
     public:
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
	void attack(){ 
        cout<<"Army attacks with tanks and soldiers."<<endl;
    }
};//army end here
class Navy:public Defence {
    int ships;  
    int submarines;
     public:
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
	void attack(){ 
        cout<<"Navy attacks with ships and submarines."<<endl;
    }
    
}; //navy end here
class Airforce:public Defence {
    int num_aircrafts; 
    int num_airbases;
     public:
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
    void attack(){
        cout<<"Airforce attacks with aircrafts and airbases."<<endl;
    }

};
int main(){
	Defence*ptr;
  Army a1(78458,"delhi",1949,45,5);
 ptr=&a1;
 cout<<"Attck of army = ";
 ptr->attack();
  

  Navy n1(45222,"mumbai",1950,89,65);
  ptr=&n1;
 cout<<"Attck of navy = ";
  ptr->attack();
  
  

  Airforce S1(458665,"pune",7854,78,65);
   ptr=&S1;
 cout<<"Attck of Airforce = ";
  ptr->attack();
  
  
}

  
  

