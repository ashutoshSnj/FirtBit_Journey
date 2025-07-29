#include<stdio.h>
void main1();
void main(){
	main1();
}
void main1 ()
{
	int a,b,c;
	a=24;b=55,c=84;
	if(a>b&&a>c){
		printf("a ia greater than others");
	}
	else if (b>c) {
		printf("b is greter than others");
	}
	else
	  printf("c ia greter than others");
}