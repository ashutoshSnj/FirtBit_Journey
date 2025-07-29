#include<stdio.h>
void swip(int*,int);
void main(){
	int size;
	printf("Enter the size of array = ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the no in array = ");
	for(int i=0;i<size;i++){	
	scanf("%d",&arr[i]);
	}
	 swip(arr,size);
	 	
}
   void swip(int*arr,int size){
   	     printf("Enter the x position = ");
   	     int x;
   	     scanf("%d",&x);
   	     int y;
   	     printf("Enter the y position = ");
   	     scanf("%d",&y);
   	     int temp;
   	     temp=arr[x-1];
   	     arr[x-1]=arr[y-1];
   	     arr[y-1]=temp;
		
		
		for(int i=0;i<size;i++){
			
			printf(" %d",arr[i]);
		}
   }