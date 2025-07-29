#include<stdio.h>
 typedef struct Student{
   int no;
   char name[20];
   int marks;
   } Student;
   void store(Student*);
    void display(Student*);
void main(){
     Student s1;
		store(&s1);
         display(&s1);
        
}
     void  store(Student*s1){
     	printf("\nEnter the roll no = ");
     	// -> (arrow opreter internalyy like (*s1).no)
        scanf("%d",& (*s1).no);
       	printf("\nEnter the name = ");
        scanf("%s",s1->name);
      	printf("\nEnter the marks = ");
        scanf("%d",&s1->marks);
  }
     void  display(Student*s){
      	printf("\n no is = %d",s->no);
      	printf("\n name is = %s",s->name);
        printf("\n marks is = %d",s->marks);
	  }
  