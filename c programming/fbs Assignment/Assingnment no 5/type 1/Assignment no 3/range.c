#include<stdio.h>
void main1();
void main(){
   main1();
}
   
   void main1()
{
int sum=0;
int a=1;
int w=7;
while(a<=w)
{
	//sum=a+b;
	sum=a+sum;
       a++;
	// q+=a;
	//printf("%d\n",sum);
}
printf("%d",sum);

}