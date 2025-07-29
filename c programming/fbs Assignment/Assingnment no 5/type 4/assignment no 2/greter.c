#include<stdio.h>
char main1(int,int,int);
void main(){
	int a,b,c;
	a=24;b=555,c=84;
	printf("%c is greter",main1(a,b,c));
}
char main1(int a,int b,int c)
{
	
	if(a>b&&a>c){
		return 'a' ;
	}
	else if (b>c) {
		return 'b';
	}
	else
	  return 'c';
}