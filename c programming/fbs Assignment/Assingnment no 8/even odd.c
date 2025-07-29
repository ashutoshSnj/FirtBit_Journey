#include<stdio.h>
void main1(int*,int);
void main(){
	int size;
		printf("Enter the size of arry\n");
	scanf("%d",& size);
	int arr[size];
	printf("Enter the no\n");
	for(int i=0;i<size;i++){
		scanf("%d",& arr[i]);
	}
	main1(arr,size);
	
}
  void main1(int*arr,int size)
	{
	
	printf("\nThese are the odd numbers");
	for(int j=0;j<size;j++){
		
		 if(arr[j]%2==0)
		 {
		 printf("\n%d",arr[j]);
		 }
		
}
	printf("\nThese are the odd numbers");
	
	for(int k=0;k<size;k++){
	
	   if(arr[k]%2!=0){
	   
	   printf("\n%d",arr[k]);
}
}
	
}