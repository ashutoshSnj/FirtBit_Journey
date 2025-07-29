#include<stdio.h>
void main(){
	int arr[5]={1,2,3,4,5};
	int brr[5]={6,7,8,9,10};
	int srr[10]={};

	int i,j;
     for(  i=0;i<5;i++){
     	srr[i]=arr[i];
     	
     	  }
     	 // printf("%d",a1);
     	  
	
	  for(  j=0;j<5;j++){
	  	srr[i++]=brr[j];
	  	
	  }
	  int k;
	  for(k=0;k<10;k++)
	  {
	  	printf("%d\n",srr[k]);
	  } 
}