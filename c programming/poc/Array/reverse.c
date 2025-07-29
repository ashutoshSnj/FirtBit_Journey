#include<stdio.h>
void main(){
	int size;
	printf("Enter the size = ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	reverse_array(arr,size);
		for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
}
   int reverse_array(int*arr,int size){
   	        int i,temp,j=size-1;
   	        for(i=0;i<size/2;i++){
   	        	    temp=arr[i];
   	        	    arr[i]=arr[j];
   	        	    arr[j]=temp;
   	        	    j--;
   	        	    //if(i=3){
   	        	    //	break;
					   //}
			   }
   }