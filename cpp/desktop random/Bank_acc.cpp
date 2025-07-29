using namespace std;
#include<iostream>
class Bank_Account{
	int account_no;
	char holder_name[40];
	double balance;
	double interest_rate;
	public:
		Bank_Account();
		Bank_Account(int,const char*,double,double);
		void display();
		void set_acc_no(int);
		void set_name(const char*);
		void setbalance(double);
		void setinterest(double);
		int get_acc_no();
		char* getname();
		double getbalance();
		double getinterest();
		
		
};
     
     Bank_Account:: Bank_Account(){
     	this->account_no=0;
     	strcpy(this->holder_name,"Not Given");
     	this->balance=0.0;
     	this->interest_rate=0.0;
	 }
	 Bank_Account::Bank_Account(int Account_no,const char*Name,double Balance,double Interest){
     	this->account_no=Account_no;
     	strcpy(this->holder_name,Name);
     	this->balance=Balance;
     	this->interest_rate=Interest;
	 }
  void Bank_Account::display(){
  	cout<<"Account No    = "<<this->account_no<<endl;
  	cout<<"Holder name   = "<<this->holder_name<<endl;
  	cout<<"Balance       = "<<this->balance<<endl;
  	cout<<"Interest Rate = "<<this->interest_rate<<endl;
  }
  	void Bank_Account::set_acc_no(int no){
  		this->account_no=no;
	  }
	void Bank_Account::set_name(const char*name){
	  	strcpy(this->holder_name,name);
	  }
	 void Bank_Account::setbalance(double balance){
	  	this->balance=balance;
	  } 
	 void Bank_Account::setinterest(double interest){
	  	this->interest_rate=interest;
	  }
	  int Bank_Account::get_acc_no(){
	  	return this->account_no;
	  }
	  char* Bank_Account::getname(){
	  	return this->holder_name;
	  }
	  double Bank_Account::getbalance(){
	  	return this->balance;
	  }
	  double Bank_Account::getinterest(){
	  	return this->interest_rate;
	  }
	  
int main(){
	Bank_Account B(45125,"Ashutosh Shelke",7845878.48,8.5);
	B.display();
	/*cout<<"no   = "<<B.get_acc_no()<<endl;
	cout<<"name = "<<B.getname()<<endl;
	cout<<"balance = "<<B.getbalance()<<endl;
	cout<<"interest = "<<B.getinterest()<<endl;
	
	B.set_acc_no(12);
	B.set_name("shubham");
	B.setbalance(3265);
	B.setinterest(785);
	B.display(); */
		
}