#include<stdio.h>
#include<string.h>

 typedef struct Employee{
	int id;
	char name[20];
   int salary;
	
} Employee;
void store(Employee*,int);
void display(Employee*,int );
void main(){
	 Employee s1;
	
	  s1.id=12;
	  strcpy (s1.name,"Ashutosh");
       s1.salary=125;
	printf("\n ID = %d",s1.id);
	printf("\n Name = %s",s1.name);
	printf("\n salary = %d",s1.salary);
	
    
	int size;
	printf("\nEnter the size = ");
	scanf("%d",&size);
      Employee arr[size];
      store(arr,size);
      display(arr,size);
      
	
	}
	  void store(Employee*s1,int size)
	{
		for(int i=0;i<size;i++){
			printf("Enter the id = ");
			scanf("%d",&s1[i].id);
			printf("Enter the name = ");
			scanf("%s",s1[i].name);
			printf("Enter the salary");
			scanf("%d",&s1[i].salary);
			
		}
	}
    void display(Employee*s1,int size){
    	for(int i=0;i<size;i++){
    		printf("\nid is = %d",s1[i].id);
    		printf("\nname is = %s",s1[i].name);
    		printf("\nsalary is = %d ",s1[i].salary);
		}
	}
	


  
