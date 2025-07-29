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
	
		if(a[j]>min){
			min=a[j];
		}
	}
	printf("%d",min);
  
}