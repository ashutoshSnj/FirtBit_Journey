#include<stdio.h>
int main1(int);
void main(){
	int c=12;
	
	printf("this is f = %d",main1(c));
	
}
int  main1(int c)
{
	
	int a=(c*1.8)+32;
	return a;
	//printf(" This is f = %d ", a);
}