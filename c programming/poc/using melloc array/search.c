#include<stdio.h>
void main(){
	int a[5]={1,2,43,4,5};
	int b=5;
	for(int i=1;i<a[4];i++){
		if(b==a[i])
		{
			printf(" index of this no %d",i);
			printf("\npositon of this no is %d",i+1);
		}
		
		
	}
}