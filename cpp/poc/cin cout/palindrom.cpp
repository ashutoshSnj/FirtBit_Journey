using namespace std;
#include<iostream>
int main()
{
	cout<<"Enter the no = ";
	int no;
	cin>>no;
	int n,a,revno=0;
	n=no;
	while(no>0)
	{
	 a=no%10;
	 revno=revno*10+a;
	 no=no/10;
	 }
		  	 if(revno==n)
	 cout<<"no are palindrom";
	 else { 
	 cout<<"no not palindram";
	 } 
	 
}