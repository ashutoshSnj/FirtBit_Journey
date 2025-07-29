
#include<stdio.h>
#include<string.h>
void main(){
	char str[30]={"ashutosh sanjay shelke"};
	char btr[10]={"jay"};
	char *a= strnstr(str,btr,5);
//	printf("%s",a);
	if(a){
		printf("string are found at %d ",a-str);
	}
	else{
		printf("string not found");
	}
}