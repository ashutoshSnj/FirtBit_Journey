#include<stdio.h>
void main(){
	int num=8;
	int a=1;
	int sum=0;
	while(a<num)
	{
		if(num%a==0)
		{
		sum=sum+a;
		}
		a++;
	}
	if(sum==num)
	{
		printf("this no is perfect");
	}
	else
	{
		printf("not perfect");
	}
}