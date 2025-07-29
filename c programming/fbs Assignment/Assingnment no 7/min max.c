#include<stdio.h>
void main(){
	printf("enter the size\n");
	int size;
	scanf("%d",&size);
	int a[size];
    printf("enter the no\n");
	for(int i=0;i<size;i++){
	scanf("%d",& a[i]);
	}
		int min =a[0];
	for(int j=0;j<size;j++){
	
		if(a[j]<min){
			min=a[j];
		}
	}
	printf(" this is min no = %d ",min);
		int max =a[0];
	for(int j=0;j<size;j++){
	
		if(a[j]>max){
			max=a[j];
		}
	}
	printf("\nthis is max no = %d",max);
  
}