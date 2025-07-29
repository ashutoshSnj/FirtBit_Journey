using namespace std;
#include<iostream>
struct Defence{
    double budget; 
    char headquarters[50];  
    int establishment_year;
    // void display1(){
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
        //display1();
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
};
	int main(){
		Army A;
		A.display();
	}
	//When a derived class inherits from a base class in C++, it indeed inherits all the public and protected functions 
	//from the base class, including functions like display. 
	//However, if the derived class defines its own version of a function with the same name as in the base class, 
	//this function overrides the base class version for objects of the derived class.

   //Why Use Scope Resolution (::)?
//The scope resolution operator (::) is necessary when you want to call the base class version of an overridden function
// from within the derived class. Without it, calling the function name will invoke the derived class’s version by default.
// The scope resolution operator tells the compiler explicitly that you want to use the base class version, 
//not the derived class version.


//derive class inherite all the function from base class but it not inherit counstructer
// the the solution is give the from derivel class counstructor to base class counstructer
// likr 	Army(double budget, char*headqurtez, int year,int soldiers,int tank):Defence(budget,headqurtez,year)
                                                                             //  this is the call of base class parametrize
																			 // counstructer 
																			 //it known as parameter initialize list