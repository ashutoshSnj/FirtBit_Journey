#include <stdio.h>
#include<string.h>
struct Product {
    int id;
    char name[50]; 
    int quantity;
    float price;
}; 

void main() {
    struct Product P1, P2;

    P1.id = 155;
    strcpy(P1.name, "Laptop");
    P1.quantity = 10;
    P1.price = 528.99;

    
    printf("\nProduct 1 details:");
    printf("\nID: %d", P1.id);
    printf("\nName: %s", P1.name);
    printf("\nQuantity: %d", P1.quantity);
    printf("\nPrice: $%f", P1.price);

    
    printf("\n\nProduct 2 details:");
    printf("\nEnter Product ID: ");
    scanf("%d", &P2.id); 
    
    printf("Enter Product Name: ");
    scanf("%s", P2.name); 
    
    printf("Enter Quantity: ");
    scanf("%d", &P2.quantity);  
    
    printf("Enter Price: ");
    scanf("%f", &P2.price);


    printf("\nID: %d", P2.id);
    printf("\nName: %s", P2.name);
    printf("\nQuantity: %d", P2.quantity);
    printf("\nPrice: %f", P2.price);
}
