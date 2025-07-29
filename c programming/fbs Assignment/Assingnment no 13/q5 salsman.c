#include<stdio.h>
#include<string.h>

struct SalesManager{
	int id;
	char name[20];
   float salary;
   int  incentive[3];
   float target[4];
	
};

void main(){
	struct SalesManager a1;
	
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
       
	printf("\n ID = %d",a1.id);
	printf("\n Name = %s",a1.name);
	printf("\n salary = %f",a1.salary);
	printf("\n  incentive is");
    for(int i=0;i<3;i++){
    	printf("\n%d",a1. incentive[i]);
	}
	for(int i=0;i<4;i++){
    	printf("\n%f",a1.target[i]);
	}

	struct SalesManager a2;
	printf("\nEnter the ID = ");
	scanf("%d",&a2.id);
	printf("\nEnter your name = ");
	scanf("%s",a2.name);
	printf("\nEnter the salary  = ");
	scanf("%f",&a2.salary);
	printf("\nEnter the  incentive  = ");
	for(int i=0;i<3;i++){
		scanf("%d",&a2. incentive[i]);
	}
	printf("\nEnter the  target  = ");
	for(int i=0;i<4;i++){
		scanf("%f",&a2. target[i]);
	}
	printf("\nThis is id = %d",a2.id);
	printf("\nThis is name = %S",a2.name);
	printf("\nThis is salary = %f",a2.salary);
	printf("\nThis is  incentive");
		for(int i=0;i<3;i++){
		printf("\n%d",a2. incentive[i]);
	}
	printf("\n this is target = ");
	
	for(int i=0;i<4;i++){
		printf("\n%f",a2. target[i]);

	
	}
}
	


  
