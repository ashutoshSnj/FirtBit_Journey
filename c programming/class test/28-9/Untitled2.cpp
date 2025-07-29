#include <stdio.h>
int deposit(int);
int withdraw(int);
int main(){
	int ammount=8000;
      int choice;
      
      printf(" press 1 for deposit ammount \n press 2 for withdraw ammount\n enter the choice = ");
      scanf("%d",& choice);
      if(choice==1){
      	     printf("your total balance is = %d ",deposit(ammount));
      	      
	  }
	  else if(choice==2)
	  {
	  	printf("your final amount is = %d",withdraw(ammount));
	  }
	  else
	  {
	  	printf("please press right no");
	  }
}   
    int deposit(int a)  {
    	int b;
    	printf("Enter the deposit value = ");
    	scanf("%d",&b);
    	int c=a+b;
    	return c;
	}
	int  withdraw(int a){
		printf("your current balance is = %d",a);
		//printf("\nplease maintain the sufficient balance in account ");
		int bal;
		
		printf("\nEnter the balance = ");
		scanf("%d",& bal);
		if(a-bal<3000)
		{
			printf("incufficient balance\n");
			return a;
			
		}
		else
		{
		  return (a-bal);
		}
		
		
	}