#include <stdio.h>
int cri(int,int);
void main() {
	int a=22;
	int b=21;
	if(cri(a,b)){
		printf("they are elligebal");
	}
	else{
		printf("not elligebal");
	}
}
 int cri(int a,int b)
{

	if ((a>=21)&&(b>=18)) {
		return 1;
	}
	else {
		return 0;
	}
	
}