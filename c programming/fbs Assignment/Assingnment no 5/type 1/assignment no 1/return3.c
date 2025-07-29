#include <stdio.h>
void main(){
	main1();
}
void main1() 
{
	int num=123;
	int a=num%10;
	num=num/10;
	int b=num%10;
	num=num/10;
	int sum=num+a+b;
	printf(" this is a sum=%d",sum);
	int a1=(a*100)+(b*10)+num;
	printf("\n this is revers no %d",a1);
	
	
}