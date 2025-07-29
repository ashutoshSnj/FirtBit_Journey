#include<stdio.h>
void main() {

int a=22343;
int b,c,y;
while(a>0)
{
	b=a%10;
	c=b+c;
	a=a/10;
	//printf("%d\n",c);
}
printf("%d\n",c);
//printf("%d",c);
}