#include<stdio.h>
#include<string.h>

struct SalesManager{
	int id;
	char name[20];
   float salary;
   int  incentive[3];
   float target[4];
   void display(){
   	printf("\n ID = %d",this->id);
	printf("\n Name = %s",this->name);
	printf("\n salary = %f",this->salary);
	printf("\n  incentive is");
    for(int i=0;i<3;i++){
    	printf("\n%d",this->incentive[i]);
	}
	for(int i=0;i<4;i++){
    	printf("\n%f",this->target[i]);
	}
   }
	
};

int main(){
	 SalesManager a1;
	
	  a1.id=2;
	  strcpy (a1.name,"Ashutosh");
       a1.salary=12552;
       a1. incentive[0]=500;
       a1. incentive[1]=800;
       a1. incentive[2]=900;
       a1.target[0]=2525.55;
       a1.target[1]=3958.85;
       a1.target[2]=6852.90;
       a1.target[3]=6585.55;
       a1.display();
	
}