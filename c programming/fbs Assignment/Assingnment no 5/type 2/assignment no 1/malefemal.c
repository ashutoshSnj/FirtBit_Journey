#include <stdio.h>
int  main1(int,int);
void main(){
		int a=22;
	int b=21;
	if(main1(a,b)==1)
	{
		printf("cupal are elligibal");
	}
	else{
		printf("not elligibal");
	}
	
}
int  main1(int a,int b) {

	//int male=(a>=21);
	//int female=(b>=18);
	if ((a>=21)&&(b>=18)) {
		return 1;
	}
	else {
		return 0;
	}
	
}