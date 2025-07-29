#include<stdio.h>
int main1();
void main()
{
 int a=	main1();
  if(a==1){
  	printf("a ia greter");
  }
  else if(a==2)
  {
  	printf("b is greter");
  	
  }
  else{
  	printf("c is greter");
  }
	
}
int  main1 ()
{
	int a,b,c;
	a=224;b=55,c=8;
	if(a>b&&a>c){
		return 1;
	}
	else if (b>c) {
		return 2;
	}
	else
	  return 3;
}