#include <stdio.h>
void main()
{ int start,end;
	printf("enter frist no= ");
	scanf(" %d",&start);
	printf("enter second no= ");
	scanf(" %d",&end);
int b=0;

  for(int a=start;a<=end;a=a+2)
  {
     b=a+b;	
     //printf("%d",b);
	  }
  	printf("sum is %d",b);
}