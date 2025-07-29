using namespace std;
#include<iostream>
int main() {
	int num=407;
	int z;
	z=num;
	int c=0;
	int a=0,b;
	while(num>0)
	{
		b=num%10;
		a=(b*b*b);
		c+=a;
		num=num/10;
		}
		if(c==z)
		{
			cout<<z<<" is  amstong no";
		}
		else
		{
		
			cout<<z<<" is  not amstong no";
		}
		
		
}