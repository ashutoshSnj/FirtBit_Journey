#include<stdio.h>
void main()
{ 
 int  m=91;
	if(m>=90) 
	   {
		printf("grad A" );
	}
	 else 
	 {
	 	if (m>=75)
	 	printf("grad b");
	 
	 else if(m>=60)
	 
	 	printf("grad c");
	 else if(m>=40)
	 	printf("grad d");
	 	else if(m>=35)
	 	 printf("pass");
		 else	 
		 	printf("fail");
	 }
}