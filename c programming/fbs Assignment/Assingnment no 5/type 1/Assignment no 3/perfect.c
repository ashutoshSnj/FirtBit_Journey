#include<stdio.h>
void main1();
void main(){
	main1();
}
void main1(){
	int num=118;
	int a=1;
	int sum=0;
	while(a<num)
	{
		if(num%a==0)
		{
			printf("%d\n",a);
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