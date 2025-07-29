#include<stdio.h>
int main1(int*,int);
void main(){
	int arr[5]={1,2,3,4,5};
	int a=main1(arr,5);
	if(a!=-1){
		printf(" \n no is found \n index of this no= %d",a);
			printf("\npositon of this no is = %d",a+1);
	}
	else{
		printf("\nno not found");
	}
	
}
  int  main1(int* a,int no )
{
	printf("Enter the no = ");
	int b;
	scanf("%d",&b);
	int i;
	for(i=0;i<no;i++){
		if(b==a[i])
		{
			return i;
		}
		else
		{
			return -1;
		}
		
		
	}
}