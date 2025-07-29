#include<stdio.h>
#include<string.h>

struct Admin{
	int id;
	char name[20];
   float salary;
   int allowance[3];
   void Display(){
   	printf("\n ID = %d",this->id);
	printf("\n Name = %s",this->name);
	printf("\n salary = %f",this->salary);
	printf("\n allowance is");
    for(int i=0;i<3;i++){
    	printf("\n%d",this->allowance[i]);
   }
}
};

 main(){
	 Admin a1;
	
	  a1.id=12;
	  strcpy (a1.name,"Ashutosh");
       a1.salary=12552;
       a1.allowance[0]=500;
       a1.allowance[1]=800;
       a1.allowance[2]=900;
	    a1.Display();
	}


	


  
