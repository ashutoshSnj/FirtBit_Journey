#include<iostream>
using namespace std;
class Book{
	int bid;
	char name[20];
	double price;
	char author[20];
	static int count;
	public:
		Book(){
			this->bid=0;
			strcpy(this->name,"not given");
			this->price=0.0;
			strcpy(this->author,"not given");
			count++;
		}
		Book(int id,char*name,double price,char*author){
			this->bid=id;
			strcpy(this->name,name);
			this->price=price;
			strcpy(this->author,author);
			count++;
		}
		void setid(int id){
			this->bid=id;
		}
		void setname(char*name){
			strcpy(this->author,name);
		}
		void setprice(double price){
			this->price=price;
		}
		void setauthor(char*au){
			strcpy(this->author,au);
		}
		int getid(){
			return this->bid;
		}
		char* getname(){
			return this->author;
		}
		double getprice(){
			return this->price;
		}
		char* getauthor(){
			return this->author;
		}
		void display(){
			cout<<"Book id = "<<this->bid<<endl;
			cout<<"name is = "<<this->name<<endl;
			cout<<"price is = "<<this->price<<endl;
			cout<<"author is = "<<this->author<<endl;
		}
		int static getcount(){
		    return count;	
		}
		~Book(){
		cout<<"Districter call = "<<this->bid<<endl;
		count--;
	}
		
};
int Book::count=0;
int main(){
   	Book B1(1,"shv",986,"dfv");
   	Book B2(2,"sdv",9632,"evads");
   	Book B3(3,"wevd",956,"evad");
   	cout<<"Count is = "<<Book::getcount();
   } /*
   
   using namespace std;
#include <iostream>

class BankAccount 
{
private:
    int accNo;
    string accHolder;
    double balance;
    static double intRate;
    static int cnt;

    public:
    // Default constructor
    BankAccount() 
    {
        this->accNo = 0;
        this->accHolder = "not-given";
        this->balance = 0.0;
        cnt++;
    }

    // Parameterized constructor
    BankAccount(int no, string nm, double bal) 
    {
        this->accNo = no;
        this->accHolder = nm;
        this->balance = bal;
        cnt++;
    }

    // Setters
    void setaccNo(int no) 
    {
        this->accNo = no;
    }

    void setaccHolder(string nm) 
    {
        this->accHolder = nm;
    }

    void setBalance(double bal) 
    {
        this->balance = bal;
    }

    static void setIntRate(double r) 
    {
        intRate = r;
    }

    // Getters
    int getaccNo()  
    {
        return this->accNo;
    }

    string getaccHolder()  
    {
        return this->accHolder;
    }

    double getBalance()  
    {
        return this->balance;
    }

    void display()  
    {
        cout << "Account No: " << accNo << endl;
        cout << "Account Holder: " << accHolder << endl;
        cout << "Balance: " << balance << endl;
    }

    // Static Function(Method)
    static int getAccountCount() 
    {
        return cnt;
    }

    // Destructor
    ~BankAccount()
    {
    	cout<<"destructor call "<<this->getaccNo()<<endl;
        cnt--;
    }

};
/*
// Static Variable initialised (its must)
double BankAccount::intRate = 12.8;
int BankAccount::cnt = 0;

int main() 
{

    // Using parameterised constructor
    BankAccount* acc = new BankAccount(101, "Ahaan", 5000.0);
    cout << "\nAccount 2:" << endl;
    acc->display();
    cout << endl;

    // update the interestRate
    BankAccount::setIntRate(10.5); 

    // using array
    BankAccount* accounts[3];
    accounts[0] = new BankAccount(102, "Moazzam", 30000.0);
    accounts[1] = new BankAccount(103, "AK", 4500.0);
    accounts[2] = new BankAccount(104, "Shammas", 7000.0);

    // Displaying the accounts
    cout << "Array of Accounts:" << endl;
    for (int i = 0; i < 3; i++) 
    {
        cout << "Account " << i + 1 << ":" << endl;
        accounts[i]->display();
        cout << endl;
    }

    cout << "\nTotal Accounts Created: " << BankAccount::getAccountCount() << endl;
    // deaalocate the memory / delete the created accounts
    delete acc;
    for (int i = 0; i < 3; i++)
        delete accounts[i];

    cout << "\nAfter Deletion Total Accounts: " << BankAccount::getAccountCount() << endl;

    return 0;
}*/