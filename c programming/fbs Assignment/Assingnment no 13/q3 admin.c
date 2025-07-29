#include<stdio.h>
#include<string.h>

struct Admin{
	int id;
	char name[20];
   float salary;
   int allowance[3];
	
};

void main(){
	struct Admin a1;
	
	  a1.id=12;
	  strcpy (a1.name,"Ashutosh");
       a1.salary=12552;
       a1.allowance[0]=500;
       a1.allowance[1]=800;
       a1.allowance[2]=900;
	printf("\n ID = %d",a1.id);
	printf("\n Name = %s",a1.name);
	printf("\n salary = %f",a1.salary);
	printf("\n allowance is");
    for(int i=0;i<3;i++){
    	printf("\n%d",a1.allowance[i]);
	}

	struct Admin a2;
	printf("\nEnter the ID = ");
	scanf("%d",&a2.id);
	printf("\nEnter your name = ");
	scanf("%s",a2.name);
	printf("\nEnter the salary  = ");
	scanf("%f",&a2.salary);
	printf("\nEnter the allowance  = ");
	for(int i=0;i<3;i++){
		scanf("%d",&a2.allowance[i]);
	}
	printf("\nThis is id = %d",a2.id);
	printf("\nThis is name = %s",a2.name);
	printf("\nThis is salary = %f",a2.salary);
	printf("\nThis is allowance");
		for(int i=0;i<3;i++){
		printf("\n%d",a2.allowance[i]);
	}

	
	}

	


  
