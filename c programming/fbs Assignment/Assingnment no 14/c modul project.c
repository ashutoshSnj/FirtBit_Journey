#include<stdio.h>
typedef struct Book {
	int book_id;
	char book_name[50];
	char author_name[50];
	char category[60];
	 int price;
	 float rating;
	
}Book;
void main(){
	Book arr[10];
      arr[0].book_id=1;
     strcpy(arr[0].book_name,"The God of Small Things");
	strcpy (arr[0].author_name,"Arundhati Roy");
	 strcpy(arr[0].category,"Fiction, Contemporary Literature");
	  arr[0].price=100;
	 arr[0].rating=2.6;
	 
	 arr[1].book_id=2;
     strcpy(arr[1].book_name,"Midnight's Children");
	strcpy (arr[1].author_name,"Salman Rushdie");
	 strcpy(arr[1].category,"Fiction, Historical Fiction");
	  arr[1].price=350;
	 arr[1].rating=4.6;
	 
	 arr[2].book_id=3;
	strcpy(arr[2].book_name,"The White Tiger");
	strcpy (arr[2].author_name,"Aravind Adiga");
	 strcpy(arr[2].category,"Fiction, Social Commentary");
	  arr[2].price=260;
	 arr[2].rating=3.6;
	 
	  arr[3].book_id=4;
	strcpy(arr[3].book_name,"A Suitable Boy");
	strcpy (arr[3].author_name,"Vikram Seth");
	 strcpy(arr[3].category,"Fiction, Family Saga");
	  arr[3].price=460;
	 arr[3].rating=3.6;
	 
	  arr[4].book_id=5;
	strcpy(arr[4].book_name,"Train to Pakistan");
	strcpy (arr[4].author_name,"Khushwant Singh");
	 strcpy(arr[4].category,"Fiction, Historical Fiction");
	  arr[4].price=560;
	 arr[4].rating=2.6;
	 
	 arr[5].book_id=6;
	strcpy(arr[5].book_name,"The Immortals of Meluha");
	strcpy (arr[5].author_name,"Amish Tripathi");
	 strcpy(arr[5].category,"Fiction, Mythological Fantasy");
	  arr[5].price=380;
	 arr[5].rating=3.8;
	 
	 arr[6].book_id=7;
	strcpy(arr[6].book_name,"Interpreter of Maladies");
	strcpy (arr[6].author_name,"Jhumpa Lahiri");
	 strcpy(arr[6].category,"Fiction, Short Stories");
	  arr[6].price=580;
	 arr[6].rating=2.8;
	 
	 