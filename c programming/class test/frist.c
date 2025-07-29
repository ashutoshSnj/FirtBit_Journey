#include <stdio.h>
void main()
{
	int no=15;
	int total;
 if(no<=50)
 {
 	
 	total=no*30;
 //	printf("%d",total);
 	printf("\nyou get 30re per unit\n total bill = %d ",total);
 	
 }
 else if(no<=150)
 {
 	total=no*40;
 	//printf("%d",total);
 	printf("\nyou get 40re per unit \n total bill = %d " ,total);
 }
 else if(no>=151)
 {
 	total=no*50;
 	//printf("%d",total);
 	printf("\nyou get 50re per unit \n total bill = %d  ",total);
 }
 else
 {
 	printf("syntax error");
 }

}