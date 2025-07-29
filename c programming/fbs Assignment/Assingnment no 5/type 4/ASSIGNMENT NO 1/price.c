#include<stdio.h>
int discount(int);
void main(){
	int price=2346;
	printf("we give you %d discount",discount(price));
}
int discount(int a){

	if(a>10000)
	     {
	     	return 10;
		 }
		 else 
		 { 
		 if 
		 
		 (a<=8000)
		  return 7;
		
		   else  if 
		   
		   (a<=5000)
		      return 5;
	       
		  else
		   printf("we not give a diss");
		   return a;
		 }
		 
		 
	
	
}