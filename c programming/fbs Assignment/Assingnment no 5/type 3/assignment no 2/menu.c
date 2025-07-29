#include<stdio.h>
void main1(int);
void main2(int);
void main(){
	int con;
	
 printf("Enter choise \n cheek no press 1 \n cheek salary press 2 \n which is your task =  ");
 scanf("%d",& con);
 if(con==1){
 		int no;
  printf("enter a no = ");
  scanf("%d",&no);
 	main1(no);
 	
	
 }
 else if(con==2) {
 	     int sal;
		printf("enter a basic salary =  ");
		scanf("%d",& sal);
		
    main2(sal);
	}
}
 void main1(int no)
 
 {
 	
   {
     if(no%2==0)
        {
        	printf("your digit is even");
			}
	   else 
	   {
	      printf(" your digit is odd");
	 }
	 
	 }
}
void main2(int sal) 
   
	{ 
	int da,ta,hra;
		if(sal>=25000)
		{
			
		   da=sal*10/100;
	        ta=sal*20/100;
	        hra=sal*25/100;
	        //printf("yor da is = %d\n your ta is = %d\n your hra is = %d",da,ta,hra);
	        int totalsa=sal+da+ta+hra;
           printf("%d",totalsa);
	        }
		else if(sal>=15000 && sal< 25000)
		{
			da=sal*15/100;
	        ta=sal*25/100;
	        hra=sal*30/100;
	        //printf("yor da is = %d\n your ta is = %d\n your hra is = %d",da,ta,hra);
	        int totalsa=sal+da+ta+hra;
            printf("%d", totalsa);
			}
			else{
				printf("you not get da,ta,hra\n your salary is only = %d",sal);
			}
	 
  }

	


	
		
  
 
	