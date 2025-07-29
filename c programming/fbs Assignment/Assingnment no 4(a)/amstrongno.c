#include <stdio.h>
void main()
{
	for(int a1=100;a1<=900;a1++)
	{
	
	int num=a1;
	
	int num1,c=0,a;
	num1=num;
	for(a=num;num>0;  )
	{
		a=num%10;
		c+=a*a*a;
		num=num/10;
		//printf("%d\n",c);	
	}

	if(num1==c)
	{
		printf("%d\n",c);
	}
	
}
 } 
