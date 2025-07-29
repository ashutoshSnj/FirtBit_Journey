#include<stdio.h>
int small_no(int*,int);
void main(){
  printf("Enter the size of array =  ");
  int size;
  scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
    printf("smallest no in given array is = %d",small_no(arr,size));
}
  int small_no(int*pqr,int size){
  	    int temp=pqr[0];
  	  for(int i=1;i<size;i++){
  	  	if(pqr[i]<temp){
  	  		temp=pqr[i];
			}
		}
		return temp;
  }
