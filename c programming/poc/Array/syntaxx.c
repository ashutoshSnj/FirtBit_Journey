#include<stdio.h>
void main(){
	int a[5];
	a[4]=55;
	a[0]=55;
	a[2]=5;
	for(int i=0;i<5;i++){
		printf("\n%d",a[i]);
	}
	//int*b=&a;
	//printf("%u",&a[0]);
	
}
//6684160