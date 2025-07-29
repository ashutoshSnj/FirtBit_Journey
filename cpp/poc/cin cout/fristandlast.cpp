using namespace std;
#include<iostream>
addlast_digit(int no){
	    int fristdigit=no%10;
	    int b;
	    while(no>=10){
	    	no=no/10;
		}
		int sum=fristdigit+no;
		return sum;
}
int main(){
    cout<<"Enter the no = ";
    int no;
    cin>>no;
    cout<<"Addition of frist and last digit is "<<addlast_digit(no);
}