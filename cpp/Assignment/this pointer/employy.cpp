#include<stdio.h>
#include<string.h>

struct Employee{
	int id;
	char name[20];
   float salary;
   void display(){
   		printf("\n ID = %d",id);
	printf("\n Name = %s",name);
	printf("\n salary = %f",salary);
     
   }
	
};

 main(){
	 Employee s1;
	
	  s1.id=12;
	  strcpy (s1.name,"Ashutosh");
       s1.salary=25000;
       s1.display();
	
	}

	


  
