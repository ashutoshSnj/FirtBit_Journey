using namespace std;
#include<iostream>
int main()
{
	cout<<"Enter the no = ";
	int no;
	cin>>no;
	int sum=1;
	while(no>0)
	{
		sum=sum*no;
		no--;
	}

	cout<<"Factorial is  "<<sum;
}