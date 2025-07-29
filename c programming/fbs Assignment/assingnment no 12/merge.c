#include<stdio.h>
int* merge(int*,int*,int);

void main(){
	printf("Enter the size of arrya = ");
	int size;
	scanf("%d",&size);
   printf("Enter the no in frist array = ");
   int arr[size];
   for(int i=0;i<size;i++){
   	scanf("%d",& arr[i]);
   }
     int btr[size];
   	printf("Enter the no in second arrya = ");
   	for(int i=0;i<size;i++){
   	scanf("%d",& btr[i]);
   }
   int *ctr=merge(arr,btr,size);
   for(int i=0;i<(size+size);i++){
   	printf("\n%d",ctr[i]);
   }
}
  int* merge(int*atr,int*btr,int size){
   	   int*ctr=(int*) malloc(sizeof(int)*(size+size));
   	   int i,j;
   	    for(i=0;i<size;i++){
   	    	ctr[i]=atr[i];
		   }
		  for(j=0;j<size;j++){
		  	ctr[i++]=btr[j];
		  } 
		  return ctr;
   }