#include<stdio.h>
int stor(int*,int);
void main(){
	printf("Enter the size = ");
	int size;
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements in array = ");
	printf("This is highest no = %d",stor(arr,size));
}
  int  stor(int*arr, int size){
  	int str[size];
  	int temp;
  	       for(int i=0;i<size;i++){
  	       	scanf("%d",&arr[i]);
			 }
			 temp=arr[0];
			 for(int i=0;i<size;i++){ 
			 
			 if(arr[i]>temp){
			 	temp=arr[i];
			 	for(int j=0;j<size;j++){
			 		arr[i]=temp
				 }
			 }
	}
         	return temp;
  }