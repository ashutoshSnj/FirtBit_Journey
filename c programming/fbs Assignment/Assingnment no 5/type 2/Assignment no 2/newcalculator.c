#include<stdio.h>
int main1(char,int,int);
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
	printf("%d",main1(opreter,num1,num2));

} 
  int main1(char opreter ,int num1,int num2){
  
	if(opreter=='+')
	{
		int a=num1+num2;
		return a;
	}
	else if(opreter=='-')
	{
		int a=num1-num2;
		return a;
	}
	else if(opreter=='*')
	{
		int a= num1*num2;
		return a;
	}
	else if(opreter=='/')
	{
		if(num2!=0){
			int a=num1/num2;
			 return a;
		}
	
	}
	else if(opreter=='%')
	{
		if(num2!=0){
			int a= num1%num2;
			return a;
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