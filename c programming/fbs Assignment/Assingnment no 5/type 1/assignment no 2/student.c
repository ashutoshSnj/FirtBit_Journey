#include <stdio.h>
void main1();
void main(){
	main1();
}
void main1() {
	int num;
    int respons;
	printf("Enter the rate = ");
	scanf("%d",& num);
	printf(" are you a student then press (1) \n are you not  a student then press (2)\n Enter your role = ");
	scanf("%d",& respons);
	
	if(respons==1)
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
    
    else if(respons==2)
     {
	 
    	 if (num>=600)
    	{
    		printf("you have 15 %% discount");
    		 
		}
		else {
			printf("you have no discount");
		}
     }
    else
    {
    	printf("invalid syntax");
	}
	
    
}