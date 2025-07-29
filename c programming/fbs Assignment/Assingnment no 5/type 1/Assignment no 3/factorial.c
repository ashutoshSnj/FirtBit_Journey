#include<stdio.h>
void main1();
void main() {
	main1();
}
void main1()
{
	int no=5;
	int sum=1;
	while(no>0)
	{
		sum=sum*no;
		no--;
		
		//printf("%d\n",sum);
			//printf("%d",sum);
	}
	printf("%d",sum);
	//printf("%d",a);
}