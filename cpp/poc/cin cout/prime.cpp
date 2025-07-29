using namespace std;
#include<iostream>
int main(){
	cout<<"Enter the no";
	int num,no;
     cin>>no;
	int temp=1;
	  num=2;
	while (num<=no/2)
	{
		if(no%num==0)
		{
			temp=0;
			break;
		}
		num++;
	} 
	if(temp==1){
		cout<<"no are prime";
	}
	else{
        cout<<"no not prime";
	}
}