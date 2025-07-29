using namespace std;
#include<iostream>
maxno(int a,int b,int c){
	if(a>b&&a>c){
		return a;
	}
	else if(b>c){
		return b;
	}
	else {
		return c;
	}
}
int main(){
	int a,b,c;
	cout<<"Enter the frist no";
	cin>>a;
	cout<<"Enter the second no";
	cin>>b;
	cout<<"Enter the thired no";
	cin>>c;
	
	cout<<"max no in this give no are "<<maxno(a,b,c);
}