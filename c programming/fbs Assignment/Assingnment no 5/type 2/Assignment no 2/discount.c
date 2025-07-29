#include<stdio.h>
int  discount();
void main(){
	
	printf("%d",discount());
}


 int discount()
{
	int dis;
	int b;
	int a=5000;
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

	  
}