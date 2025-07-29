using namespace std;
#include<iostream>
struct Bank_Acco {
	char name[40];
	int account_no;
	char type[20];
	double amount;
	void display(){
		cout<<"name = "<<this->name<<endl;
		cout<<"balance = "<<this->amount<<endl;
	}
	Bank_Acco(){
		strcpy(this->name,"not given");
		this->account_no=0;
		strcpy(this->type,"not given");
		this->amount=0;
	}
	Bank_Acco(char*name,int no,char*type,double amount){
		strcpy(this->name,name);
		this->account_no=no;
		strcpy(this->type,type);
		this->amount=amount;
	}
	void setdepositer_name(char*str){
		strcpy(this->name,str);
	}
	void setaccount_no(int a){
		this->account_no=a;
	}
	void settype(char*str){
			strcpy(this->type,str);
	}
	void setamount(double a){
		this->amount=a;
	}
	char* setdepositer_name(){
		return this->name;
	}
	int getaccount_no(){
		return this->account_no;
	}
	char* gettype(){
			return this->type;
	}
	double getamount(){
		return this->amount;
	}
	void withdraw_ammount(double a){
	 
	 //double limit=5000;
	 if(this->getamount()>a){
	      this->setamount(getamount()-a);
	      cout<<"ammount succseffuly withdrol"<<endl;
	 }
	 else{
	 	cout<<"Ammount not sufficient"<<endl;
	 }
	}	
	void diposit_ammount(double a){
		this->setamount(this->getamount()+a);
		cout<<"Succsefully deposit"<<endl;
	}
};
int main(){
	Bank_Acco S;
	Bank_Acco S1("Ashutosh",7854215,"seving",785462);
     S1.withdraw_ammount(965);
      
     
}