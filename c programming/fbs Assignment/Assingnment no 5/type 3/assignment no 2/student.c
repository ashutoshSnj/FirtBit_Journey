#include <stdio.h>
void main1(int);
void main2(int);
void main() {
	int num;
    int respons;
	printf("Enter the rate = ");
	scanf("%d",& num);
	printf(" are you a student then press (1) \n are you not  a student then press (2)\n Enter your role = ");
	scanf("%d",& respons);
	if(respons==1){
		main1(num);
	}
	else if(respons==2)
	{
		main2(num);
	}
}
      void main1(int num)
{


	{
		  if (num>=500)
		{
			printf("you have 20 %% discount");
			 
		}
	  else 
	      {
	      	printf("you have 10 %% discount");
	      	
		  }
    }
}
     void main2(int num)
    {
	

     
	 
    	 if (num>=600)
    	{
    		printf("you have 15 %% discount");
    		 
		}
		else  {
			printf("you have no discount");
		}
     
   
	
    
}