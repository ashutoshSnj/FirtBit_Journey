#include<stdio.h>
int main1(int);
void main(){
	int a;
	int n=5;
	a=main1(n);
	//printf("%d",a);
	if(a==1){
		printf("this no is even");
	}
	else{
		printf("this no is odd");
	}
	
}
int main1(int a)
{
	
	if(a%2==0){
		return(1);
	}
	else{
		return(0);
	}
}