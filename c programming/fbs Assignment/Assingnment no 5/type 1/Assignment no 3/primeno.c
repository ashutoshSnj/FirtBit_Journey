#include <stdio.h>
void main1();
void main(){
	main1();
}
void main1(){
	int no=4;
	int num=2,temp=1;
	while (num<=no/2)
	{
		if(no%num==0)
		{
			temp=0;
		
		
		}
		num++;
			//printf("%d\n",num);
	} 
	if(temp==1){
		printf("prime no");
	}
	else{
		printf("not prime");
	}
}