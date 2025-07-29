#include<stdio.h>
#include<stdlib.h>
#include "headerfile.h"

void main() {
    int total_size = 20;
    Book* arr =(Book*) malloc(sizeof(Book)*total_size);
    HardcodedBooks(arr);

    int size = 0;
    int size1 = 10; 
    int choice;

    do {
        printf("\n--- Menu ---");
        printf("\n1. Add Books");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Top & Lowest Books");
        printf("\n5. Maximum Price & Rating Book");
        printf("\n6. Update Book Info");
        printf("\n7. Search by Author");
        printf("\n8. Remove a Book");
        printf("\n9. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nHow many books do you want to add = ");
                scanf("%d", &size);
                stor(arr, size);
                size1 += size;  
                break;
            case 2:
                display(arr, size1);
                break;
            case 3:
                search(arr, size1);
                break;
            case 4:
                topbook(arr, size1);
                break;
            case 5:
                maxbook(arr, size1);
                break;
            case 6:
                update(arr, size1);
                break;
            case 7:
                author(arr, size1);
                break;
            case 8:
                removebook(arr, &size1);
                break;
            case 9:
                printf("Exit\n");
                free(arr);
                break;
        }
    } while(choice != 9);
}