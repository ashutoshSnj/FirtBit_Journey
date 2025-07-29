#include<stdio.h>
void main(){
 int arr[5]={9,8,7,54,4};
 int i,j;
for(i=0;i<5;i++)
{
	for(j=i+1;j<5;j++){
		if(arr[i]>arr[j]){
		
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
}
 } 
  for(i=0;i<5;i++)
  {
  	printf("\n%d",arr[i]);
	}  
	
}