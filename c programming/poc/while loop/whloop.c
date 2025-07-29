#include<stdio.h>
void main()
{
	/*int s;
	int y=0;
	int x,z,k;
	int num;
	scanf("%d",& k);
	s=k;
	int a=0;
	num=k;
	while(num!=0)
	 {
	 	num=num/10;
	 	a++;
	 }
	 printf("%d",a);
	 num =k;
	 while(num!=0)
	 {
	 	x=num%10;
	 	y+=pow(x,a);
	 	num=num/10;
	 	//printf("%d",y);
	 }
//	 printf("%d",y);*/
	 	
	
int num=1234; 
int z=1234;
int sum;
int k=0;
int a,x;
int n=4;
while (num>0)
	
 {
 	a=num%10;
 	
	sum+=pow(a, n);
	//x=sum+k;
	num=num/10;
}
printf("%d",sum);
 //printf("\n%d",x); 
/*if(y==s)
 {
 	printf("this is amstrong no");
 }
 else{
 	printf("this is not amstrong");
 }*/ 
}