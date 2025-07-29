#include<stdio.h>
void main(){
       int a[4]={8,2,35,4};
	   
	
		int min =a[0];
		
		int j;
	for(int j=0;j<a[3];j++){
	
		if(a[j]<min){
			min=a[j];
		}
	}
	printf("%d",min);
  
}