#include <stdio.h>
void main1(int);
void main(){
	 int salary=500;
	 main1(salary);
}
void main1(int salary){
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
printf(" this is total salary %d",totals);
}
 