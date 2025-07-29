#include<stdio.h>
int*stor(int*,int);
void main(){
	int size;
	printf("Enter the size = ");
	scanf("%d",&size);
	 int* arr=(int*) malloc(sizeof (int)*size);
	  int* as=stor(arr,size);
	  int i;
	  for(i=0;i<size;i++){
    		printf(" %d",as[i]);
}
}
     int* stor(int*arr,int size)
    {
    printf("Enter the no ");	
    
    	int i=0;
    	for(i=0;i<size;i++){
    		scanf("%d",&arr[i]);
    		
    		
	}
	return arr;
}