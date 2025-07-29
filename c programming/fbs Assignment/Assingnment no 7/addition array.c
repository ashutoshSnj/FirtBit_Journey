#include<stdio.h>
void main(){
	int arr[4]={1,2,3,4};
	int brr[5]={2,3,4,4};
	int crr[5]={};
	for(int i=0;i<4;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	  for(int i=0;i<4;i++) 
	{
		printf("\n%d",crr[i]);
	}        
}