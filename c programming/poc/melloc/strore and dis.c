#include<stdio.h>
#include <stdlib.h>
int*stor(int);
void main(){
	int size;
	printf("Enter the size = ");
	scanf("%d",&size);
	  int* as=stor(size);
	  int i;
	  for(i=0;i<size;i++){
    		printf(" %d",as[i]);
}
}
     int* stor(int size)
    {
    printf("Enter the no ");	
    int* arr=(int*) malloc (sizeof (int)*size);	
    	int i=0;
    	for(i=0;i<size;i++){
    		scanf("%d",&arr[i]);
    		
    		
	}
	return arr;
}