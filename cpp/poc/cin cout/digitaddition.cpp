using namespace std;
#include<iostream>
int addno(int no){
	int a,sum=0;
	while(no>0){
	    a=no%10;
	    sum=sum+a;
	    no=no/10;
	}
	return sum;
}
int main(){
	cout<<"Enter the no = ";
	int no;
	cin>>no;
	cout<<"Sum of all digit is = "<<addno(no);
}