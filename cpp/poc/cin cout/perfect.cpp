using namespace std;
#include<iostream>

int  main(){
	int num=8;
	int a=1;
	int sum=0;
	while(a<num)
	{
		if(num%a==0)
		{
		sum=sum+a;
		}
		a++;
	}
	if(sum==num)
	{
		cout<<"no are perfect";
	}
	else
	{
		cout<<"no not perfect";
	}
}