using namespace std;
#include<iostream>
#include<string.h>
struct Product {
    int id;
    char name[50]; 
    int quantity;
    float price;
    void display(){
    	
    cout<<"\nProduct  details:";
    cout<<"\nID: "<< id;
    cout<<"\nName: "<<name;
    cout<<"\nQuantity: "<<quantity;
    cout<<"\nPrice: "<<price;

	}
	void setid(int i){
		this->id=i;
	}
	void setname(char*chr){
		strcpy(this->name,chr);
	}
	void setquantity(int i){
		this->quantity=i;
	}
	void setprice(float i){
		this->price=i;
	}
	int getid(){
		return this->id;
	}
	char* getname(){
		return this->name;
	}
	int getquantity(){
		return this->quantity;
	}
	int getprice(){
		return this->price;
	}
	Product(){
		this->id=0;
		strcpy(this->name,"not given");
		this->quantity=0;
		this->price=0;
	}
	Product(int a,char* chr,int b,float c){
		this->id=a;
		strcpy(this->name,chr);
		this->quantity=b;
		this->price=c;
	}
}; 

int main() {
    Product P1,P2(2,"lenovo",5,8523);

    P1.setid(1);
    P1.setname("hp victus");
    P1.setquantity(3);
    P1.setprice(152000);
   // char* ass=P1.getname();
   // printf("%s",ass);
    
    
    P1.display();
    P2.display();
}
