#include<stdio.h>
#include<string.h>
void main(){
	char chr[]={"ashu"};
	char bhr[]={"Ashu"};
	int a= strcasecmp(chr,bhr);
	printf("%d",a);
	if(a==0){
		printf("String are equal");
	}
	else if(a<0){
		printf("chr string is small");
	}
	else{
		printf("chr string is greter");
	}
	
}