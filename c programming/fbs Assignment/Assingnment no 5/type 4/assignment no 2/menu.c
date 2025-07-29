#include<stdio.h>
int main1(int);
int main2(int);
void main(){
	int con;
	
 printf("Enter choise \n cheek no press 1 \n cheek salary press 2 \n which is your task =  ");
 scanf("%d",& con);
 if(con==1){
 		int no;
  printf("enter a no = ");
  scanf("%d",&no);

 	if(main1(no)){
		printf("no is even");
	
	}
	else{
		printf("no is odd");
	}
 	
	
 }
 else if(con==2) {
 	     int sal;
		printf("enter a basic salary =  ");
		scanf("%d",& sal);
		
    printf("total salary is %d ",main2(sal));
	}
}
 int main1(int no)
 
 {
 	
   {
     if(no%2==0)
        {
        	return 1;
			}
	   else 
	   {
	      return 0;
	 }
	 
	 }
}
int  main2(int sal) 
   
	{ 
	int da,ta,hra;
		if(sal>=25000)
		{
			
		   da=sal*10/100;
	        ta=sal*20/100;
	        hra=sal*25/100;
	        //printf("yor da is = %d\n your ta is = %d\n your hra is = %d",da,ta,hra);
	        int totalsa=sal+da+ta+hra;
          return totalsa;
	        }
		else if(sal>=15000 && sal< 25000)
		{
			da=sal*15/100;
	        ta=sal*25/100;
	        hra=sal*30/100;
	        //printf("yor da is = %d\n your ta is = %d\n your hra is = %d",da,ta,hra);
	        int totalsa=sal+da+ta+hra;
            return totalsa;
			}
			else{
				printf("you not get da,ta,hra\n your salary is only = %d",sal);
				return sal;
			}
	 
  }

	


	
		
  
 
	