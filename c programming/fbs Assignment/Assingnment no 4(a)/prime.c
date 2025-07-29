#include<stdio.h>
void main(){
	int num=100;
	int temp;
	temp=num;
	int i=1;
	int flag=1;
	for(i=1;i<num/2;i++){
		if(num%i==0)
		{
			flag=0;
		}

		//printf("%d",flag);
		
	}
	if(flag==1)
	{
		printf("this is prime no");
	}
	else
	{
		printf("this is not prime");
	}
}