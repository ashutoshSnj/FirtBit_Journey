#include <stdio.h>
//void main1(int,int);
void main(){
	int a,b;
	a=12;
	b=23;
	main1(&a,&b);
	printf("a=%d,b=%d",a,b);
	
}
    void main1(int*s,int*b)
{
	int a=*s;
	*s=*b;
	*b=a;
	
}