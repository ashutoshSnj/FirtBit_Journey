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
}; 

int main() {
    Product P1;

    P1.id = 5;
    strcpy(P1.name, "Laptop");
    P1.quantity = 10;
    P1.price = 500000;

    P1.display();
}
