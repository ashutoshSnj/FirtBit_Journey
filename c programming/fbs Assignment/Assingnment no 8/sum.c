#include<stdio.h>
int main1(int*,int);
void main(){
		printf("Enter the size\n");
	int size;
	scanf("%d",& size);
	int arr[size];
   printf("Sum of given array is = %d ",main1(arr,size));
	
}
int  main1(int*arr,int size){

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
	   return sum; 
}