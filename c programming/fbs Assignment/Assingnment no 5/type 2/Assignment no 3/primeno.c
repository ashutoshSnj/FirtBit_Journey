#include <stdio.h>
int main1();
void main(){
	if(main1()){
		printf("this no is prime no");
	}
	else
	{
	   printf("no is not prime");	
	}
}
int main1(){
	int no=14;
	int num=2,temp=1;
	while (num<=no/2)
	{
		if(no%num==0)
		{
			temp=0;
		}
		num++;
	} 
	if(temp==1){
		return 1;
	}
	else{
		return 0;
	}
}