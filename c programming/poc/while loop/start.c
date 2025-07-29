
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Book {
    int book_id;
    char book_name[50];
    char author_name[50];
    char category[60];
    int price;
    float rating;
} Book;

void HardcodedBooks(Book* );
void display(Book*, int );
void stor(Book*,int);
void search(Book*,int);
void topbook(Book*,int );
void maxbook(Book*,int);
void update(Book*,int);
void author(Book*,int);
void removebook(Book*,int*);

int main() {
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
                break;
        }
    } while(choice != 9);
}

void display(Book* arr, int size) {
    for (int i=0;i<size;i++) {
        printf("\nBook ID: %d", arr[i].book_id);
        printf("\nBook Name: %s", arr[i].book_name);
        printf("\nAuthor Name: %s", arr[i].author_name);
        printf("\nCategory: %s", arr[i].category);
        printf("\nPrice: %d", arr[i].price);
        printf("\nRating: %.2f\n", arr[i].rating);
        printf("-------------------------------\n");
    }
}

void HardcodedBooks(Book* arr) {
    arr[0].book_id = 1;
    strcpy(arr[0].book_name, "God of Small Things");
    strcpy(arr[0].author_name, "Arundhati Roy");
    strcpy(arr[0].category, "Fiction");
    arr[0].price = 100;
    arr[0].rating = 2.6;

    arr[1].book_id = 2;
    strcpy(arr[1].book_name, "Midnight Children");
    strcpy(arr[1].author_name, "Salman Rushdie");
    strcpy(arr[1].category, "History");
    arr[1].price = 350;
    arr[1].rating = 4.6;

    arr[2].book_id = 3;
    strcpy(arr[2].book_name, "The White Tiger");
    strcpy(arr[2].author_name, "Aravind Adiga");
    strcpy(arr[2].category, "Social");
    arr[2].price = 260;
    arr[2].rating = 3.8;

    arr[3].book_id = 4;
    strcpy(arr[3].book_name, "A Suitable Boy");
    strcpy(arr[3].author_name, "Vikram Seth ");
    strcpy(arr[3].category, "Family");
    arr[3].price = 460;
    arr[3].rating = 2.6;

    arr[4].book_id = 5;
    strcpy(arr[4].book_name, "Train");
    strcpy(arr[4].author_name, "Khushwant Singh");
    strcpy(arr[4].category, "History");
    arr[4].price = 560;
    arr[4].rating = 4.5;

    arr[5].book_id = 6;
    strcpy(arr[5].book_name, "Wings");
    strcpy(arr[5].author_name, "abdul kalam");
    strcpy(arr[5].category, "Biography");
    arr[5].price = 380;
    arr[5].rating = 3.7;

    arr[6].book_id = 7;
    strcpy(arr[6].book_name, "Interpreter");
    strcpy(arr[6].author_name, "Lahiri");
    strcpy(arr[6].category, "Stories");
    arr[6].price = 780;
    arr[6].rating = 4.9;

    arr[7].book_id = 8;
    strcpy(arr[7].book_name, "Gitanjali");
    strcpy(arr[7].author_name, "Rabindranath Tagore");
    strcpy(arr[7].category, "Poetry");
    arr[7].price = 950;
    arr[7].rating = 2.2;

    arr[8].book_id = 9;
    strcpy(arr[8].book_name, "Inheritance");
    strcpy(arr[8].author_name, "Kiran Desai");
    strcpy(arr[8].category, "Culture");
    arr[8].price = 1000;
    arr[8].rating = 2.9;

    arr[9].book_id = 10;
    strcpy(arr[9].book_name, "The Palace of Illusions");
    strcpy(arr[9].author_name, "Divakaruni");
    strcpy(arr[9].category, "Mythology");
    arr[9].price = 680;
    arr[9].rating = 1.8;
}


void stor(Book*arr,int size) {
	 
 for (int i=0;i<size;i++) {
        int x=10+i; 
        int flag= 0; 

        printf("\nEnter the book id: ");
        scanf("%d", &arr[x].book_id);
        for (int j=0;j<x;j++) { 
            if (arr[j].book_id == arr[x].book_id) {
                printf("Book ID %d already exists. Please enter a unique ID.\n", arr[x].book_id);
                i--;  
                flag = 1;
                break;
            }
        }

        if (flag) 
		   continue;
   
        printf("Enter the book name: ");
        getchar();
        fgets(arr[x].book_name, 50, stdin);
        
        int len = strlen(arr[x].book_name);
        if (arr[x].book_name[len - 1] == '\n') {
            arr[x].book_name[len - 1] = '\0';
        }
        
        printf("Enter the author name: ");
        fgets(arr[x].author_name, 50, stdin);
        len = strlen(arr[x].author_name);
        if (arr[x].author_name[len - 1] == '\n') {
            arr[x].author_name[len - 1] = '\0';
        }
        
        printf("Enter the category: ");
        fgets(arr[x].category, 60, stdin);
        len = strlen(arr[x].category);
        if (arr[x].category[len - 1] == '\n') {
            arr[x].category[len - 1] = '\0';
        }
        
        printf("Enter the price: ");
        scanf("%d", &arr[x].price);
        
        printf("Enter the rating: ");
        scanf("%f", &arr[x].rating);
    }

}

 void search(Book*arr,int size){
  	    printf("search by id(1)\n By Book name(2) \n By Author name (3)");
  	      int choice;
  	      scanf("%d",&choice);
  	      int flag=1;
  	      if(choice==1){
  	      	   int id;
  	      	     printf("Enter the id = ");
  	      	     scanf("%d",&id);
        for(int i=0;i<size;i++){
        	  if(id==arr[i].book_id){
        	  	    display(&arr[i],1);
        	  	    flag=0;
        	  	    break;
			  }
        	
        	}
			 
		
		if(flag==1){
			printf("Book not found");
		}
  	  }
			
  	      else if(choice==2){
  	      	   printf("Enter the Book name = ");
   	   char str[30];
   	   getchar();
   	    fgets(str, 30, stdin);
        int len = strlen(str);
        if (str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
         flag=1;
        for(int i=0;i<size;i++){
        	 int a= strcasecmp(arr[i].book_name,str);
        	 if(a==0){
        	 	display(&arr[i],1);
        	 	flag=0;
        	 	break;
			 }
			 
		}
	  	if(flag==1){
			printf("Book not found");
		}
	}
			
  	      else if(choice==3){
			
   	   printf("Enter the author name = ");
   	   char str[30];
   	   getchar();
   	    fgets(str, 30, stdin);
        int len = strlen(str);
        if (str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
         flag=1;
        for(int i=0;i<size;i++){
        	 int a= strcasecmp(arr[i].author_name,str);
        	 if(a==0){
        	 	display(&arr[i],1);
        	 	flag=0;
        	
			 }
			 
		}
		if(flag==1){
			printf("author not found");
		}
	}
	else{
		printf("Enter the correct choice");
	}
	}
	
	
  void topbook(Book*arr,int size)
	{
	

	int choice;
	printf("Top 3 books by price and rating (1)\nLowest 3 books by price and rating (2) = ");
	scanf("%d",&choice);
	if(choice==1){
	
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i].price < arr[j].price) {
                Book temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    printf("\nTop 3 most expensive books:\n");
    for (int i = 0; i < 3 && i < size; i++) { 
        display(&arr[i], 1); 
    }
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i].rating < arr[j].rating) {
                Book temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    printf("\nTop 3 book on rating:\n");
    for (int i = 0; i < 3 && i < size; i++) { 
        display(&arr[i], 1); 
    }
}
  else if(choice==2){
  	 for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i].price > arr[j].price) {
                Book temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    printf("\nLowest 3 books by price :\n");
    for (int i = 0; i < 3 && i < size; i++) { 
        display(&arr[i], 1);
  }
  	 for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i].rating > arr[j].rating) {
                Book temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nLowest 3 books by rating:\n");
    for (int i = 0; i < 3 && i < size; i++) { 
        display(&arr[i], 1); 
    }
  
}
}

  void maxbook(Book*arr,int size) 
{
	int a=arr[0].price;
	int i;
	
	for( i=0;i<size;i++){
		   if(a<arr[i].price){
		   	 a=arr[i].price;
		   }
	}
	 printf("\nBooks with the highest price (%d):\n", a);
	for(i=0;i<size;i++){
		  if(arr[i].price==a){
		  	display(&arr[i],1);
		  }
	}
	float b=arr[0].rating;
	for(i=0;i<size;i++){
		if(arr[i].rating>b){
			b=arr[i].rating;
		}
	}
	  printf("Books with the highest rating (%.2f):\n",b);
	for(i=0;i<size;i++){
		if(b==arr[i].rating){
		   display(&arr[i],1);
		}
	}
	
}
  void update(Book*arr,int size){
  	printf("update Book price(1)\n update Book rating(2) = ");
  	int choice;
  	scanf("%d",&choice);
  
	  
  	    printf("Enter the Book name = ");
   	   char str[40];
   	   int a;
   	 
   	  getchar();
   	    fgets(str, 40, stdin);
        int len = strlen(str);
        if (str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
          int flag=1;
        	if(choice==1){
        for(int i=0;i<size;i++){
  	       a=strcasecmp(str,arr[i].book_name);
  	       if(a==0){
  	       	         int price;
  	       	      printf("\nEnter the price of that book = ");
  	       	      scanf("%d",&price);
  	       	      arr[i].price=price;
  	       	      display(&arr[i],1);  
					   flag=0;  
			 }	 
		  }
	
		  if(flag){
		  printf("Book not found");
  }
}
   else if(choice==2){
  	 
  	  for(int i=0;i<size;i++){
  	  	     a=strcasecmp(str,arr[i].book_name);
  	  	     if(a==0){
  	       	         float rating;
  	       	      printf("\nEnter the rating of that book = ");
  	       	      scanf("%f",&rating);
  	       	      arr[i].rating=rating;
  	       	      display(&arr[i],1);  
					   flag=0;  
			 }	
			
		}
		 if(flag){
			 	printf("Book not found");
			 }
  }
   else{
   	printf("wrong choice ");
   }
}
  void author(Book*arr,int size){		
   	   printf("Enter the author name = ");
   	   fflush(stdin);
   	   char str[30];
   	    fgets(str, 30, stdin);
        int len = strlen(str);
        if (str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
         int flag=1;
        for(int i=0;i<size;i++){
        	 int a= strcasecmp(arr[i].author_name,str);
        	 if(a==0){
        	 	display(&arr[i],1);
        	 	flag=0;
			 }
			 
		}
		if(flag==1){
			printf("author not found");
		}
  }
    void removebook (Book* arr, int*size) {
    int id;
    printf("Enter the book ID to remove: ");
    scanf("%d", &id);

    int flag= 0;
    for (int i=0;i<*size; i++) {
        if (arr[i].book_id == id) {
            flag = 1;

            for (int j=i;j<*size-1;j++) {
                arr[j]=arr[j+1];
            }
            (*size)--; 
            printf("Book with ID %d has been removed.\n", id);
            break;
        }
    }
    if (flag==0) {
        printf("Book with ID %d not found.\n", id);
    }
}

  	            
  	            
  

