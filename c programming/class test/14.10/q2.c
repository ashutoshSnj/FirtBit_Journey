#include<stdio.h>
 int palindrom(int*,int);
void main(){
		int size;
	printf("Enter the size of array = ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the no in array = ");
	for(int i=0;i<size;i++){	
	scanf("%d",&arr[i]);
	}

	if(palindrom(arr,size)){
		printf("array not palindrom");
	}
	 else{
	 	printf("array are palindrom");
	 }
}
     int palindrom(int*arr,int size){
     	    int j=size-1;
     	     for(int i=0;i<size/2;i++){
     	     	    if(arr[i]!=arr[j]){
     	     	    	   
     	     	    	return 1;
					  }	
					  j--;
			  }
			       return 0;
	 }