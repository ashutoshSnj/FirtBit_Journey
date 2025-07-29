#include<stdio.h>
int cal(char,int,int);
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
      printf("Result is %d ",cal(opreter,num1,num2));
}
  int cal(char opreter,int num1,int num2)
{
     
	if(opreter=='+')
	{
		return num1+num2;
	}
	else if(opreter=='-')
	{
		return num1-num2;
	}
	else if(opreter=='*')
	{
		return num1*num2;
	}
	else if(opreter=='/')
	{
		if(num2!=0){
			return num1/num2;
		}
		
	}
	else if(opreter=='%')
	{
		if(num2!=0){
			return num1%num2;
		}
		
	}
	else
	{
		printf("invalid data");
	}
	
	
	
}