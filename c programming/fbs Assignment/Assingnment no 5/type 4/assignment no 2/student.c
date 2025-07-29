#include <stdio.h>
int main1(int);
int main2(int);
void main() {
	int num;
    int respons;
	printf("Enter the rate = ");
	scanf("%d",& num);
	printf(" are you a student then press (1) \n are you not  a student then press (2)\n Enter your role = ");
	scanf("%d",& respons);
	if(respons==1){
		printf("Discount is %d%%",main1(num));
	}
	else if(respons==2)
	{
		printf("Discount is %d%%",main2(num));
	}
}
      int main1(int num)
{ 
  
	{
		  if (num>=500)
		{
			return 20;
			
			 
		}
	  else 
	      {
	      	return 10;
	      	
		  }
    }
}
     int main2(int num)
    {
	

     
	 
    	 if (num>=600)
    	{
    		return 15;
    		 
		}
		else  {
			printf("you have no discount");
			return num;
		}
     
   
	
    
}