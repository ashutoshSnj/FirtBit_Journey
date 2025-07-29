#include <stdio.h>
int main1(int);
void main(){
int salary=8000;	
  
  printf("total salary is = %d",main1(salary));
	
}

int  main1(int salary){
int da,ta,hra;
 
if (salary<=5000)
 {
   da=salary*10/100;
	 ta=salary*20/100;
	 hra=salary*25/100;
	 
	}
else
	{
	 da=salary*15/100;
	 ta=salary*25/100;
	 hra=salary*30/100;
	
}
int totals=salary+da+ta+hra;
 return totals;
//printf(" this is total salary %d",totals);
}
 