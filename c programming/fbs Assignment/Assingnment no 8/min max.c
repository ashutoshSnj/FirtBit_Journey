#include<stdio.h>
void main1(int*,int );
void main(){
	printf("enter the size\n");
	int size;
	scanf("%d",&size);
	int a[size];
	main1(a,size);
}
void main1(int*a,int size)
{

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
	printf("This is a min no = %d",min);
	int max=a[0];
	for(int i=0;i<size;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("\nThis is a max no = %d",max);
  
}