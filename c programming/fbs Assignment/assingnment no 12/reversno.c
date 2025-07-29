#include<stdio.h>
int*revno(int);
void main(){
	int size;
	printf("Enter the size of arry = ");
	scanf("%d",& size);
	
	int *arr=revno(size);
	printf("\nthis is revears array");
		for(int i=0;i<size;i++){
			printf("\n%d",arr[i]);
		}
}
 int* revno(int size)
{
int*arr=(int) malloc(sizeof(int)*size);
	printf("Enter the no in arry = ");
	for(int i=0;i<size;i++){
			scanf("%d",& arr[i]);
		}
	int j=(size-1);
	for(int i=0;i<(size/2);i++){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}
	
    return arr;
}