#include <stdio.h>
int  main1();
void main(){
	if(main1()){
		printf("this is amstrong no");
	}
	else {
		printf("not amstrong no");
	}

	
}
int  main1() {
	int num=408;
	int z;
	z=num;
	int c=0;
	int a=0,b;
	while(num>0)
	{
		b=num%10;
		a=(b*b*b);
		c+=a;
		num=num/10;
		//printf("%d\n",c);
		}
		if(c==z)
		{
		   return 1;
		}
		else
		{
			return 0;
		}
		
		
}