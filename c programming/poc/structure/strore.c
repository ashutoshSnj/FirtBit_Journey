#include<stdio.h>
 typedef struct Student{
   int no;
   char name[20];
   int marks} Student;
   Student store();
void main(){
     Student s1,s2;
        s1=store();
         display(s1);
         s2=store();
         display(s2);
}
     Student store(){
     	Student temp;
     	printf("\nEnter the roll no = ");
        scanf("%d",& temp.no);
       	printf("\nEnter the name = ");
        scanf("%s",temp.name);
      	printf("\nEnter the marks = ");
        scanf("%d",&temp.marks);
        return temp ;
  }
     void  display(Student s){
      	printf("\n no is = %d",s.no);
      	printf("\n name is = %s",s.name);
        printf("\n marks is = %d",s.marks);
	  }
  