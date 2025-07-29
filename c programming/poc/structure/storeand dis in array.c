#include<stdio.h>
 typedef struct Student{
   int no;
   char name[20];
   int marks[6];
   } Student;

    void store(Student*,int  );
   void  display(Student*,int);
void main(){
     
        Student str[5];
        store(str,3);
        display(str,3);
}
     void store(Student *ptr,int size ){
     	for(int i=0;i<size;i++){
		 
     	printf("\nEnter the roll no = ");
        scanf("%d",& ptr[i].no);
       	printf("\nEnter the name = ");
        scanf("%s",ptr[i].name);
      	printf("\nEnter the marks = ");
		  for(int j=0;j<6;j++){
		  	scanf("%d",&ptr[i].marks[j]);
		  }
    
    }
  }
     void  display(Student*s,int size){
     	for(int i=0;i<size;i++){
		 
      	printf("\n Roll no = %d",s[i].no);
      	printf("\n name of the Student  = %s",s[i].name);
      	printf("\n marks is");
      	for(int j=0;j<6;j++){
      		 printf("\n%d",s[i].marks[j]);
		  }
       
    }
	  }
  