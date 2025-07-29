#include <stdio.h>
void main(){
	int a=5;
	 int c=-34;
	int*b=&a;
	*b=c; //6684176
	printf("%d",*b);
//	printf("%d",&c);
	
}