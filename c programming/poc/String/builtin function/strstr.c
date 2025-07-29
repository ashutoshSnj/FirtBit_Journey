#include<stdio.h>
void main(){
	char str[30]={"ashutosh sanjay shelke"};
	char btr[10]={"nil"};
	char *a=strstr(str,btr);

	if(a){
		printf("string are found at %d ",a-str);
	}
	else{
		printf("string not found");
	}
}