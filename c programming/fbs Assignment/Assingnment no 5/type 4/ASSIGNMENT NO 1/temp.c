#include<stdio.h>
int main1(int);
void main(){
int c=12;
  printf("This f is = %d",main1(c));	
}
 int main1(int c)
{


	int a=(c*1.8)+32;
	return a;
}