#include<stdio.h>
void main(){
	int arr[5]={1,4,45,6,5};
	int brr[5]={1,3,5,6,4};
int i;
int j;
	  for(i=0;i<5;i++){
	  	   for(j=0;j<5;j++){
	  	   	   if(arr[i]==brr[j])
	  	   	      printf("\n%d",arr[i]);
	  	   	    
			 }
	  }
}