#include<stdio.h>
#include<string.h>

struct Employee{
	int id;
	char name[20];
   float salary;
	
};

void main(){
	struct Employee s1;
	
	  s1.id=12;
	  strcpy (s1.name,"Ashutosh");
       s1.salary=125;
	printf("\n ID = %d",s1.id);
	printf("\n Name = %s",s1.name);
	printf("\n salary = %f",s1.salary);
     

	struct Employee s2;
	printf("\nEnter the ID = ");
	scanf("%d",&s2.id);
	printf("\nEnter your name = ");
	scanf("%s",s2.name);
	printf("\nEnter the salary  = ");
	scanf("%f",&s2.salary);
	printf("\nThis is id = %d",s2.id);
	printf("\nThis is name = s%",s2.name);
	printf("\nThis is salary = %f",s2.salary);
	

	
	}

	


  
