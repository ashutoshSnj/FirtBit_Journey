#include <stdio.h>
void cri(int,int);
void main() {
	int a=22;
	int b=21;
	cri(a,b);
}
 void cri(int a,int b)
{

	if ((a>=21)&&(b>=18)) {
		printf("elligibal");
	}
	else {
		printf("not elligibal");
	}
	
}