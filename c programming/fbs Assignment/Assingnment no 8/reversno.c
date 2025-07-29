#include<stdio.h>
void main1(int*,int );
void main2(int*,int);
void main(){
	int size;
	printf("Enter the size of arry = ");
	scanf("%d",& size);
	int arr[size];
	main1(arr,size);
	main2(arr,size);
}
  void main1(int*arr,int size)
	{
	
	printf("Enter the no in arry = ");
	for(int i=0;i<size;i++){
			scanf("%d",& arr[i]);
		}
	int j=(size-1);
	for(int i=0;i<(size/2);i++){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}
}
  void main2(int*arr,int size)
{

	printf("\nthis is revears array");
		for(int i=0;i<size;i++){
			printf("\n%d",arr[i]);
		}
    
}