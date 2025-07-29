#include<stdio.h>
#include<string.h>

typedef struct Date {
	int date;
	char month[20];
	int year;
	
}Date;
void stor(Date*,int );
void display(Date*,int);
void main(){
int size;
printf("Enter the size = ");
scanf("%d",&size);
Date str[size];
stor(str,size);
display(str,size);

}
   void stor(Date*s2,int size)
	{
	for(int i=0;i<size;i++){
	
	printf("\nEnter the date = ");
	scanf("%d",&s2[i].date);
	printf("Enter your month = ");
	scanf("%s",s2[i].month);
	printf("\nEnter the year = ");
	scanf("%d",&s2[i].year);
}
}

   void display(Date*s2,int size){
   for(int i=0;i<size;i++){
   
	printf("\n date = %d",s2[i].date);
	printf("\n month = %s",s2[i].month);
		printf("\n year = %d",s2[i].year);
	}
}
	


  
