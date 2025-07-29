#include <stdio.h>
int main1(int);
void main(){
	int num=123;
	printf("\nthis is revers no %d",main1(num));
}
int main1(int num) 
{

	int a=num%10;
	num=num/10;
	int b=num%10;
	num=num/10;
	int sum=num+a+b;
	printf(" \nthis is a sum=%d",sum);
	int a1=(a*100)+(b*10)+num;
	return a1;
	
	
}