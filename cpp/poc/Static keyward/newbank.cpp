using namespace std;
#include<iostream>
class Bank_Account{
	int account_no;
	char holder_name[40];
	double balance;
	static double interest_rate;
	static int count;
	public:
		Bank_Account(){
		this->account_no=0;
     	strcpy(this->holder_name,"Not Given");
     	this->balance=0;
     	count++;
		} 
		
		Bank_Account(int Account_no ,const char* Name,double Balance){
			this->account_no=Account_no;
     	strcpy(this->holder_name,Name);
     	this->balance=Balance;
     	
     	count++;
		}
		
		void display(){
	cout<<"Account No    = "<<this->account_no<<endl;
  	cout<<"Holder name   = "<<this->holder_name<<endl;
  	cout<<"Balance       = "<<this->balance<<endl;
  	cout<<"Interest Rate = "<<this->interest_rate<<endl;
		}
		int static getcount(){
			return count;
		}
		void set_acc_no(int no){
			this->account_no=no;
		}
		
		void set_name(const char* name){
	    	strcpy(this->holder_name,name);
		}
		
		void setbalance(double balance){
			this->balance=balance;
		}
		
		void static setinterest(double interest){
		       interest_rate=interest;        
		}
		
		int get_acc_no(){
	   	return this->account_no;
		}
		
		char* getname(){
		return this->holder_name;
		}
		
		double getbalance(){
			return this->balance;
		}
		
		double getinterest(){
		return this->interest_rate;
		}
		
		
};
  double Bank_Account::interest_rate =12.2;
  int Bank_Account::count=0;
int main(){
	Bank_Account B(45125,"Ashutosh Shelke",7845878.48);
	Bank_Account a;
	Bank_Account c;
	Bank_Account d;
	Bank_Account *acc=new Bank_Account[5];
	cout<<"count is "<<Bank_Account::getcount()<<endl;
	
}