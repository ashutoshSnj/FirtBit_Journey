#include<stdio.h>
void main(){
	printf("Enter the size\n");
	int size;
	scanf("%d",& size);
	int arr[size];
	printf("Enter the no\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",& arr[i]);
			}
	int sum=0;
	for(int j=0;j<size;j++)
	{
		sum=sum+arr[j];
	}
	printf("this is final sum = %d",sum);
}