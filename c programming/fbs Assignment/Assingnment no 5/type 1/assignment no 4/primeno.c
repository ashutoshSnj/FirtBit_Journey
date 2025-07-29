#include<stdio.h>
void main1();
void main(){
	main1();
	
}
void main1(){
	for(int a1=2;a1<=100;a1++){
	
	int num=a1;
	int temp;
	temp=num;
	int i=2;
	int flag=1;
	//printf("%d",num);
	for(i=2;i<=num/2;i++){
		if(num%i==0)
		{
			flag=0;
		}

		//printf("%d",flag);
		
	}
	if(flag==1)
	{
		printf("%d\n",a1);
	}
	
}
}