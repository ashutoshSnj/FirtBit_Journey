#include <stdio.h>
#include<string.h>
struct Product {
    int id;
    char name[50]; 
    int quantity;
    float price;
    void display(){
    	
    printf("\nProduct  details:");
    printf("\nID: %d", id);
    printf("\nName: %s",name);
    printf("\nQuantity: %d",quantity);
    printf("\nPrice: %f",price);

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
}; 

int main() {
    Product P1;

    P1.setid(1);
    P1.setname("hp victus");
    P1.setquantity(3);
    P1.setprice(152000);
   // char* ass=P1.getname();
   // printf("%s",ass);
    
    P1.display();
}
