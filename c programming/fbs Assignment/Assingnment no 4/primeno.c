#include<stdio.h>
void main(){
	for(int a1=2;a1<=100;a1++){
	
	int num=a1;
	int temp;
	temp=num;
	int i=2;
	int flag=1;
	for(i=2;i<=num/2;i++){
		if(num%i==0)
		{
			flag=0;
		}

		//printf("%d",flag);
		
	}
	if(flag==1)
	{
		printf("%d ",a1);
	}
	
}
}