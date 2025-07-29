#include<stdio.h>
void stor(int*,int );
void main1(int*,int);
void main(){
	int size;
	printf("Enter the size of arry= ");
	scanf("%d",& size);
 int arr[size];
 stor(arr,size);
 main1(arr,size);
 
}
   void stor(int*arr,int size)
{
  printf("\nEnter the no in Arry = ");
 for(int i=0;i<size;i++)
 {
 	scanf("%d",&arr[i]);
 }

 }

 
 void main1(int*arr,int size)
 {
 
 int i,j;
for(i=0;i<size;i++)
{
	for(j=i+1;j<size;j++){
		if(arr[i]>arr[j]){
		
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
}
 } 
 printf("\nSort no is");
  for(i=0;i<size;i++)
  {
  	printf("\n%d",arr[i]);
	}  
	
}