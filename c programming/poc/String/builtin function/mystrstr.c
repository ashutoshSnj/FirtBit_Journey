#include<stdio.h>
void main(){
	char str[50]="ashutosh sanjay shelke";
	char btr[20]={"sanjay"};
	char *chr=strstr(str,btr);
	if(chr!='null'){
		printf("substring is found at %d",(chr-str));
	}
	else{
		printf("substring not found");
	}
}