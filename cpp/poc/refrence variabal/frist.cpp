#include<iostream>
using namespace std;
void myfun(int &b,int&c){
	// recive by refrence
	int temp=b;
	b=c;
	c=temp;
  }
int main(){
  int a=15;
  int b=12;
  myfun(a,b);
  //pass by refrence/values
  cout<<a<<"\n"<<b;

}