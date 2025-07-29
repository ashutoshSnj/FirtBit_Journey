#include<stdio.h>
void main(){
	int num=28;
	  int num1;
	  num1=num;
	int i;
	int a=0;
	for(i=1;i<num;i++)
	    if(num%i==0)
	    {
	    	a=a+i;
	    //	printf("%d\n",a);
		
		if(num1==a)
		printf("this is perfect no %d",num1);
	}
	  else
	  {
	  	printf("this is not perfect no %d",num1);
	  }
}
