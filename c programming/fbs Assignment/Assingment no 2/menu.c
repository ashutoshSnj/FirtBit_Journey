#include<stdio.h>
void main(){
	int con,no;
	int sal,da,ta,hra;
 printf("Enter choise \n cheek no press 1 \n cheek salary press 2 \n which is your task =  ");
 scanf("%d",& con);
 //printf(" you are enter = %d" , con);
 
 if(con==1) 
 
 {
 
  printf("enter a no = ");
  scanf("%d",& no);
   {
   
     if(no%2==0)
        {
        	printf("your digit is even");
			}
	   else if (no%2!=0)
	   {
	   printf(" your digit is odd");
	 }
	 
	 
   }
}
   if(con==2) 
	{
		printf("enter a basic salary =  ");
		scanf("%d",& sal);
		if(sal>=25000)
		{
		   da=sal*10/100;
	        ta=sal*20/100;
	        hra=sal*25/100;
	        printf("yor da is = %d\n your ta is = %d\n your hra is = %d",da,ta,hra);
	        int totalsa=sal+da+ta+hra;
           printf("\nyour total salary is =%d",totalsa);
	        }
		else if(sal>=15000 && sal< 25000)
		{
			da=sal*15/100;
	        ta=sal*25/100;
	        hra=sal*30/100;
	        printf("yor da is = %d\n your ta is = %d\n your hra is = %d",da,ta,hra);
	        int totalsa=sal+da+ta+hra;
            printf("\nyour total salary is =%d",totalsa);
			}
	  else{
	  	printf("you are not get da,ta,hra");
	  }	
  }
  
	
}

	
		
  
 
	