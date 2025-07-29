#include<stdio.h>
#include<string.h>

struct Date {
	int date;
	char month[20];
	int year;
	
};

void main(){
	struct Date s1;
	
	  s1.date=12;
	  strcpy (s1.month,"feb");
       s1.year=2024;
	printf("\n date = %d",s1.date);
	printf("\n month = %s",s1.month);
	printf("\n year = %d",s1.year);
    

	struct Date s2;
	printf("\nEnter the date = ");
	scanf("%d",&s2.date);
	printf("Enter your month = ");
	scanf("%s",s2.month);
	printf("\nEnter the year = ");
	scanf("%d",&s2.year);

	printf("\n date = %d",s2.date);
	printf("\n month = %s",s2.month);
		printf("\n year = %d",s2.year);
		

	


  
}