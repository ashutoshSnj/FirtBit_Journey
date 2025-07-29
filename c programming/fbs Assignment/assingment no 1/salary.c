#include <stdio.h>
void main(){
int da,ta,hra;
 int salary=500;
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
 