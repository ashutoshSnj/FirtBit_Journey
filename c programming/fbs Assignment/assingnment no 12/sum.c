#include<stdio.h>
void main(){
	printf("Enter the size\n");
	int size;
	scanf("%d",& size);
	int a=sum(size);
	printf("sum is = %d ",a);
}

   int sum(int size)
{
 int*str=(int*) malloc(sizeof(int)*size);
 printf("Enter the no = ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",& str[i]);
			}
	int sum=0;
	for(int j=0;j<size;j++)
	{
		sum=sum+str[j];
	}
	  return sum;
}