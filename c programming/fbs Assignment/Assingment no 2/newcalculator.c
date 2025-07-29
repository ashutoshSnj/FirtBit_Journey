#include<stdio.h>
void main()
{
	int num1,num2;
	char opreter;
	printf("Enter Frist no = ");
	scanf( "%d",&num1);
	printf("Enter a second no = ");
	scanf( "%d",&num2);
	printf("Enter the opreter (+,-,*,/,%) =   ");
	scanf(" %c",&opreter);

	
	if(opreter=='+')
	{
		printf("result = %d",num1+num2);
	}
	else if(opreter=='-')
	{
		printf("result = %d" , num1-num2);
	}
	else if(opreter=='*')
	{
		printf("result = %d" , num1*num2);
	}
	else if(opreter=='/')
	{
		if(num2!=0){
			printf("result = %d" , num1/num2);
		}
		else{
			printf("you put wrong no");
		}
	}
	else if(opreter=='%')
	{
		if(num2!=0){
			printf("result = %d" , num1%num2);
		}
		else{
			printf("you put wrong no");
		}
	}
	else
	{
		printf("invalid data");
	}
	
	
	
}