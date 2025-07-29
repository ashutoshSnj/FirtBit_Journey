#include<stdio.h>
#include<string.h>

typedef struct SalesManager{
	int id;
	char name[20];
   float salary;
   int  incentive[3];
   float target[4];
	
}Sales;
void store(Sales*,int );
  void display(Sales*,int );
void main(){
	int size;
	printf("Enter the size = ");
	scanf("%d",&size);
	Sales arr[size];
	store(arr,size);
	display(arr,size);
}
    void store(Sales*a2,int size)
	
{
	
		for(int i=0;i<size;i++){
		
	printf("\nEnter the ID = ");
	scanf("%d",&a2[i].id);
	printf("\nEnter your name = ");
	scanf("%s",a2[i].name);
	printf("\nEnter the salary  = ");
	scanf("%f",&a2[i].salary);
	printf("\nEnter the  incentive  = ");
	for(int j=0;j<3;j++){
		scanf("%d",&a2[i]. incentive[j]);
	}
	printf("\nEnter the  target  = ");
	for(int j=0;j<4;j++){
		scanf("%f",&a2[i]. target[j]);
	}
}
}
   void display(Sales*a2,int size){
	
	for(int i=0;i<size;i++){
	
	
	printf("\nThis is id = %d",a2[i].id);
	printf("\nThis is name = %s",a2[i].name);
	printf("\nThis is salary = %f",a2[i].salary);
	printf("\nThis is  incentive");
		for(int j=0;j<3;j++){
		printf("\n%d",a2[i]. incentive[j]);
	}
	printf("\n this is target = ");
	
	for(int j=0;j<4;j++){
		printf("\n%f",a2[i]. target[j]);
	}
}
}
	


  
