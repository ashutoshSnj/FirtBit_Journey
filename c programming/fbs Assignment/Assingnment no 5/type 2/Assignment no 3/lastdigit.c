#include <stdio.h>
int main1();
void main(){
	printf("addition is = %d",main1());
}
int  main1(){
	int num=853;
	int num1=num%10;
	int sum=0;
	int a=1;
	a=num%10;
	while(num>=10)
	{
		num=num/10;	
	}

   sum=num1+num;
    return sum;
	
	
}