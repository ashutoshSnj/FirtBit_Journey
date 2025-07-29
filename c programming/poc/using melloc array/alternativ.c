#include<stdio.h>
void main(){
	int size;
   printf("Enter the size of arry\n");
	scanf("%d",& size);
	int arr[size]; 
	printf("Enter the no\n");
	for(int i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
	printf("Altarnativ no\n");
	   for(int j=0;j<size;j=j+2)
	{
		printf("%d\n", arr[j]);
	}
	
	
}