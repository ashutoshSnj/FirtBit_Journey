#include<stdio.h>
int main1();
void main(){
	if(main1()){
		printf("no is perfect");
	}
	else
	
	printf("no is not perfect");
}
int main1(){
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
		return 1;
	}
	else
	{
		return 0;
	}
}