#include<stdio.h>
void main(){ 

	for (int start=10;start<=15;start++){
	
	int a;
	int b=start;
	printf("\n%d=",start);
	for(int a=1;a<=b;a++)
	{
		if(b%a==0){
			printf("%d ",a);
		}
		
	}
}
	
}