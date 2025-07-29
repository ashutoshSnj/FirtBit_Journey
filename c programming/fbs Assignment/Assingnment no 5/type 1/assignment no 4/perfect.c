#include<stdio.h>
void main1();
void main(){
	main1();
}
void main1(){
	for (int a1=1;a1<=100;a1++){
	
	int num=a1;
	  int num1;
	  num1=num;
	int i;
	int a=0;
	for(i=1;i<num;i++)
	    if(num%i==0)
	    //printf("%d\n",num);
	    {
	    	a=a+i;
	    //	printf("%d\n",a);
		}
		if(num1==a)
		printf("%d\n",a);
    }
}