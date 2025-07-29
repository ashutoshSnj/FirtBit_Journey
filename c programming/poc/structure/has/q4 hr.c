#include<stdio.h>
#include<string.h>

typedef struct Hr{
	int id;
	char name[20];
   float salary;
   int commission[3];
	
}Hr;
void store(Hr*,int );
  void display(Hr*,int );
void main(){
	  int size;
	  printf("Enter the size");
	scanf("%d",&size);
	Hr arr[size];
	store(arr,size);
	display(arr,size);

	}
	 


	void store(Hr*a2,int size){
		for(int i=0;i<size;i++){
		
	printf("\nEnter the ID = ");
	scanf("%d",&a2[i].id);
	printf("\nEnter your name = ");
	scanf("%s",a2[i].name);
	printf("\nEnter the salary  = ");
	scanf("%f",&a2[i].salary);
	printf("\nEnter the commission  = ");
	for(int j=0;j<3;j++){
		scanf("%d",&a2[i].commission[j]);
	}
	}
}
  void display(Hr*a2,int size)
   {
   for(int i=0;i<size;i++){
   
	printf("\nThis is id = %d",a2[i].id);
	printf("\nThis is name = %s",a2[i].name);
	printf("\nThis is salary = %f",a2[i].salary);
	printf("\nThis is commission");
		for(int j=0;j<3;j++){
		printf("\n%d",a2[i].commission[j]);
		
	}
	}
}
	
	

	


  
