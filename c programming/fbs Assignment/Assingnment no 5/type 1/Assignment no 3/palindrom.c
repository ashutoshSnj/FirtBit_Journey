#include <stdio.h>
void main1();
void main(){
	main1();
}
void main1()
{
	int no=12145;
	int n,a,revno=0;
	n=no;
	while(no>0)
	{
	 a=no%10;
	 revno=revno*10+a;
	 no=no/10;
	 printf("%d\n",revno);
	 }
	 
	//printf("%d",a);
		  	 if(revno==n)
	 printf("palindrom");
	 else { 
	 printf("not palindrom");
	 } 
	 
}