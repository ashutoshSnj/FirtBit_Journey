#include<stdio.h>
void main(){

	int size;
   printf("Enter the size of arry\n");
	scanf("%d",& size);
	int arr[size]; 
	printf("Enter the no\n");
	for(int i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
	int a;
	
	printf("These are the prime no \n");

	for (int i=0;i<size;i++){
		
		int flag=0;
		if(arr[i]<2){
			continue;
		}
		
		for(int j=2;j<=arr[i]/2;j++)
		{
			if(arr[i]%j==0)
			{
				flag=1;
				break;
			}
		
	
	}
if(flag==0)
	{
		printf("%d\n",arr[i]);
	}
}
	
	
}