#include<stdio.h>
int main1();
void main(){
	printf("factorial is = %d ",main1());
}

int  main1()
{
	int no=5;
    int sum=1;
	while(no>0)
	{
		sum=sum*no;
		--no;
	}
	return sum;
}