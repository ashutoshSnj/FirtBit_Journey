#include <stdio.h>
void main(){
	
	int start,end;
	printf("enter frist no= ");
	scanf("%d",&start);
	printf("enter second no= ");
	scanf("%d",&end); 
	
	printf("even no\n");
	for(int a=start;a<=end;a++)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
		}
		
		//printf("%d\n",a);
	}
	printf("odd no\n");
	for(int a=start;a<=end;a++)
	{
		if(a%2!=0)
		{
			printf("%d\n",a);
		}
		
	}
	
}