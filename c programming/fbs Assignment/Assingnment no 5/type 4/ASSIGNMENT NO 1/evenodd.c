#include<stdio.h>
int main1(int);
void main(){
	int a=14;
	if(main1(a)){
		printf("no is even");
	
	}
	else{
		printf("no is odd");
	}
}
int main1(int a)
{
	//int a=5;
	if(a%2==0){
		return 1;
	}
	else{
		return 0;
	}
}