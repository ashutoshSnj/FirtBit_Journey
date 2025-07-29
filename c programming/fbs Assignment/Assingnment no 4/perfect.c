#include<stdio.h>
void main(){
	for (int a1=1;a1<=154;a1++){
	
	int num=a1;
	  int num1;
	  num1=num;
	int i;
	int a=0;
	for(i=1;i<num;i++)
	    if(num%i==0)
	    {
	    	a=a+i;
	    //	printf("%d\n",a);
		}
		if(num1==a)
		printf("%d ",a);
    }
}