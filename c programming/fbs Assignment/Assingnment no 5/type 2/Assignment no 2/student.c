#include <stdio.h>
int main1();
int main2();
void main() {
	
    int respons;

	printf(" are you a student then press (1) \n are you not  a student then press (2)\n Enter your role = ");
	scanf("%d",& respons);
	if (respons==1)
	{
	      
		if(main1()==20){
			printf("you have 20 %% discount");
		}
		else
		{
			printf("you have 10%% discount");
		}
		
	}
	else if(respons==2)
	{
		
		if(main2())
		{
			printf("you have 20 %% discount");
		}
		else{
			printf("you not get a discount");
		}
	}
	else{
    printf("wrong instruction");
	}
	
}
  int main1()	
{    int num;
	printf("Enter the rate = ");
	scanf("%d",& num);
	    
		  if (num>=500)
		{
		  return 20;
			 
		}
	  else 
	      {
	      	return 10;
	      	
		  }
    
}
     int main2()
{    int num;
	printf("Enter the rate = ");
	scanf("%d",& num);
       if (num>=600)
    	{
    		return 15;
    		 
		}
		else {
			return 0;
		}
     
}
    
