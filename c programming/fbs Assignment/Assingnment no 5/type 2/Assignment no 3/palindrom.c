#include <stdio.h>
int main1();
void main(){
   if(main1()){
   	printf("This no is palindrom");
   }
   else
    printf("not palindrom");
   
}
int main1()
{
	int no=1251;
	int n,a,revno=0;
	n=no;
	while(no>0)
	{
	 a=no%10;
	 revno=revno*10+a;
	 no=no/10;
	// printf("%d\n",revno);
	 }
	 
	//printf("%d",a);
		  	 if(revno==n)
	 return 1;
	 else { 
	  return 0;
	 } 
	 
}