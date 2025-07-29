#include<stdio.h>
int main1(int);
void main(){
		int a=5000;
		printf("total price = %d",main1(a));
}
int main1(int a)
{
	int dis;
	int b;

	if(a>=10000)
	{
		 dis=1000;
		 b=a-dis;
	 return b;
	}
	else if (a>=7000)
	{
	    dis=500;
	    b=a-dis;
	 return b;
	
	}
	else if(a>=6500)
	{
		 dis=300;
		 b=a-dis;
	  return b;
	}
	else if(a>=4500)
	  {
	  	 dis=200;
	  	 b=a-dis;
	   return b;
	  }
	else
	{
		printf("we do not give you discount");
		return a;
	}
	  
}