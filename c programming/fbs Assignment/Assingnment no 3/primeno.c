#include <stdio.h>
void main(){
	int no=14;
	int num=2,temp=1;
	while (num<=no/2)
	{
		if(no%num==0)
		{
			temp=0;
		}
		num++;
	} 
	if(temp==1){
		printf("prime no");
	}
	else{
		printf("not prime");
	}
}