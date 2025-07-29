/*#include <stdio.h>
void main(){
	int num=125;
	int a=1
     int b
	int sum=1,temp=0;
	while(a>0) {
		b=num%10;
		
		while(b>0)
		  
		sum=sum*a;
		a--;
	printf("\n%d",sum);
	}
//	printf("%d",sum);
} */

#include<stdio.h>
int main1();
void main(){
	if(main1()){
		printf("ths is strong no");
	}
	else 
	printf("this is not strong no");
}
int  main1(){
	int no=146;
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
