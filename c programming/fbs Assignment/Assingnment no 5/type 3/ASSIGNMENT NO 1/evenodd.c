#include<stdio.h>
void main1(int);
void main(){
	int a=13;
	main1(a);
}
void main1(int a)
{
	//int a=5;
	if(a%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
}