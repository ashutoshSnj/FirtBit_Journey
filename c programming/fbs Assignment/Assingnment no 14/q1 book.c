#include<stdio.h>
#include<string.h>
typedef struct Book{
	char name[30];
		int id;
	char author[30];
	int price;
} Book;
void  store(Book*,int);
void display(Book*,int);

void main(){
	int size;
	printf("Enter the size = ");
	scanf("%d",&size);
   Book bok[size];
     store(bok,size);
     display(bok,size);
     
	 
}
    void  store(Book*as,int size){
     	  for(int i=0;i<size;i++){
     	  	printf("Enter the name of book = ");
     	  	fflush(stdin);
     	  	 fgets(as[i].name,30,stdin);
     	  	 int a=strlen(as[i].name);
     	  	 if(a>0&&as[i].name[a-1]=='\n'){
     	  	 	(as[i].name[a-1]='\0');
				}
		    printf("Enter the id = ");
		    scanf("%d",&as[i].id);
		    printf("Enter the auther name = ");
		    fflush(stdin);
		    fgets(as[i].author,30,stdin);
     	  	 int b=strlen(as[i].author);
     	  	 if(b>0 && as[i].author[b-1]=='\n'){
     	  	 	(as[i].author[b-1]='\0');
				}
				printf("Enter the price = ");
			scanf("%d",&as[i].price);
		   }
	 }
	 void display(Book*as,int size){
	 	for(int i=0;i<size;i++){
	    printf("\nName of book = %s",as[i].name);
	 		printf("\nId = %d",as[i].id);
	 		printf("\nAuther name = %s",as[i].author);
	 		printf("\nPrice is = %d",as[i].price);
		 }
	 }
	