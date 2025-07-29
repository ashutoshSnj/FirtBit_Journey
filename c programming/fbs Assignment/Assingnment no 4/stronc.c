#include<stdio.h>
int main(){

	for(int num1=1;num1<=1000;num1++)
	{
	
	int num=num1;
	int temp;
	temp=num;
	int i=1,k=1;
	int sum=0;
	int a,w;
	
	for(i=1;temp>0;i++)
	 {
	     a=temp%10;
	     w=a;
	     int mul=1;
	     //int k=1;
	    for(int k=1;k<=w;k++)
	         {
	           mul=mul*k;
			 }
			 
		//printf("%d\n",mul);
		sum+=mul;
		   temp=temp/10;
}
 if(num==sum)
 { printf("%d\n",sum); 
 }
}
       //printf("%d\n",sum);
}
