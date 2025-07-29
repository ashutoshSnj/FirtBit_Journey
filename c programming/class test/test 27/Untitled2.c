#include<stdio.h>
 void main(){
 	int a=2;
 	int b=4;
 	int c=1;
 	for(int i=1;i<=b;i++)
 	{
 		c=a*c;
	 }
 	printf("%d^%d = %d ",a,b,c);
 }