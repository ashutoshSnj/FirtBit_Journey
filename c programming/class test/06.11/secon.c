#include<stdio.h>
typedef struct Date{
	int day;
	int month;
	int year;
}Date;
void stor(Date*);
void main(){
      Date s;
	  stor(&s);
	  printf("\n%d",s.day);
	   printf("\n%d",s.month);
	    printf("\n%d",s.year);
	   
}
   void stor(Date*s){
    printf("Enter the day = ");
    scanf("%d",&s->day);
    printf("Enter the month = ");
    scanf("%d",&s->month);
     printf("Enter the year = ");
    scanf("%d",&s->year);

   }