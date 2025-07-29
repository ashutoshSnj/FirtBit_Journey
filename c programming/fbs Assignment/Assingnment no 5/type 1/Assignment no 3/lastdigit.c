#include <stdio.h>
void main1();
void main(){
	main1();
}
void main1(){
	int num=833;
	int num1=num%10;
	int sum=0;
	int a=1;
	a=num%10;
	while(num>=10)
	{
		num=num/10;	
		//printf("\n%d",num);
	
	}
//	printf("%d",num1);
   sum=num1+num;
    printf(" this is addtion = %d" , sum);
	
	
}