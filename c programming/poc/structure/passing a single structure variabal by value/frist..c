#include<stdio.h>
#include<string.h>
 typedef struct Student{
   int no;
   char name[20];
   int marks;
   } Student;
  Student store(Student);
    void display(Student);
void main(){
     Student s1;
    // s1.no=5;
    // strcpy(s1.name,"ashu");
    // s1.marks=23;
     //display(s1);
	s1=	store(s1);
//	When you pass Student s1 by value to store, a copy of s1 is made, which is then manipulated inside store and returned
         display(s1);
         
        
}
        Student  store(Student temp){
        	 //display(temp);
     	printf("\nEnter the roll no = ");
        scanf("%d",&temp.no);
       	printf("\nEnter the name = ");
        scanf("%s",temp.name);
      	printf("\nEnter the marks = ");
        scanf("%d",&temp.marks);
        return temp;
  }
   void  display(Student s){
      	printf("\n no is = %d",s.no);
      	printf("\n name is = %s",s.name);
        printf("\n marks is = %d",s.marks);
	  }