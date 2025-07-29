#include<stdio.h>
void main1(int,int,int);
void main(){
	int a,b,c;
	a=24;b=55,c=84;
	main1(a,b,c);
}
void main1(int a,int b,int c)
{
	
	if(a>b&&a>c){
		printf("a ia greater than others");
	}
	else if (b>c) {
		printf("b is greter than others");
	}
	else
	  printf("c ia greter than others");
}