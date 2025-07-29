#include<stdio.h>
#include<string.h>

typedef struct Admin{
	int id;
	char name[20];
   int salary;
   int allowance[3];
	
} Admin;
void stor(Admin*,int);
void display(Admin*,int);

void main(){
       printf("Enter the size of inputs = ");
       int size;
       scanf("%d",&size);
       Admin arr[size];
       store(arr,size);
       display(arr,size);

	
	}

 void store(Admin*ptr,int size)
	{
		
		for(int i=0;i<size;i++)
		{ 
		    printf("\nEnter id = ");
		    scanf("%d",&ptr[i].id);
			printf("\nEnter the name = ");
			fflush(stdin);
			fgets(ptr[i].name,20,stdin);
		  	printf("\nEnter the salary = ");
		  	scanf("%d",&ptr[i].salary);
		  	printf("\nEnter the Allowance = ");
		  	for(int j=0;j<3;j++){
		  		scanf("%d",&ptr[i].allowance[j]);
			  }
		  	
		}
		
	}
void display(Admin*ptr,int size){
		for(int i=0;i<size;i++){
			printf("\n id is = %d",ptr[i].id);
			printf("\nname is = %s",ptr[i].name);
			printf("\nsalary is = %d",ptr[i].salary);
			printf("\nAllowance is = ");
			for(int j=0;j<3;j++){
		  		printf("\n%d",ptr[i].allowance[j]);
			  }
		}
	}


  
