#include<stdio.h>
void main1();
void main(){
	main1();
}
void main1(){
	int a=1;
	while(a<=10)
	{
		printf("\n%d",a);
		a++;
	}
	printf("%d",a);
}