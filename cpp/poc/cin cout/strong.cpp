using namespace std;
#include<iostream>
int  strongno(int no){
	int sum=0;
	int temp=no;
	int rem,fact;
	while(temp>0){
		rem=temp%10;
		fact=1;
		int i=rem;
		while(i>0)
		 {
		  fact*=i;
		  i--;
		 }
	      sum+=fact;
			temp/=10;
		}
	if(sum == no){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int no;
	cout<<"Enter the no";
	cin>>no;
	
	if(strongno(no)){
		cout<<"ths is strong no";
	}
	else 
	cout<<"this is not strong no";
}
   