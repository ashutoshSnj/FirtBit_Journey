#include<stdio.h>

	void main() {
		int a=12;
		int*ptr=&a;
		*(ptr+0)=256;
		*(ptr+1)=12;
		*(ptr+2)=712;
		*(ptr+3)=23;
		*(ptr+4)=90;
		*(ptr+6)=23;
		printf("%d\n,%d\n,%d\n,%d\n,%d",*(ptr+0),*(ptr+1),*(ptr+2),*(ptr+3),*(ptr+4),*(ptr+6));
		
	}
