#include<stdio.h>
#include<string.h>

struct Hr{
	int id;
	char name[20];
   float salary;
   int commission[3];
   void display(){
   	printf("\n ID = %d",id);
	printf("\n Name = %s",name);
	printf("\n salary = %f",salary);
	printf("\n commission is");
    for(int i=0;i<3;i++){
    	printf("\n%d",commission[i]);
	}
   }
	
};

int main(){
	 Hr a1;
	
	  a1.id=2;
	  strcpy (a1.name,"Ashutosh");
       a1.salary=12552;
       a1.commission[0]=500;
       a1.commission[1]=800;
       a1.commission[2]=900;
	a1.display();
}