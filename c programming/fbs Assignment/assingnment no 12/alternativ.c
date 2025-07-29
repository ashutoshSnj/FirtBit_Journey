#include<stdio.h>
#include <stdlib.h>
int*alter(int*,int);

void main(){
	int size;
   printf("Enter the size of arry\n");
	scanf("%d",& size);
	int*str=(int*)malloc(sizeof(int)*size);
	alter(str,size);
	printf("Altarnativ no\n");
//	printf("%d",*str);
//	printf("\n%d",*ptr);
	
	   for(int j=0;j<size;j=j+2)
	{
		printf("%d\n", str[j]);
	}
	
}
 int* alter(int*arr,int size){
  
	
	printf("Enter the no\n");
	for(int i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
	    return arr;
	
	
}