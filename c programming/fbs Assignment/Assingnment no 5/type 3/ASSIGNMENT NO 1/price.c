#include<stdio.h>
void discount(int);
void main(){
	int price=23456;
	discount(price);
}
void discount(int a){

	if(a>10000)
	     {
	     	printf("10%% discount");
		 }
		 else 
		 { 
		 if 
		 
		 (a<=8000)
		    printf("7%% dis");
		
		   else  if 
		   
		   (a<=5000)
		      printf("5%% dis");
	       
		  else
		   printf("we not give a diss");
		  
		 }
		 
		 
	
	
}