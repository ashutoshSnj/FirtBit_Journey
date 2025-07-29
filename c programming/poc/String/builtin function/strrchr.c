#include<stdio.h>
void main(){
	char chr[10]={"Ashutosh"};
    char *ch=strrchr(chr,'t');
    if(ch){
    	printf("char is found at %d index" , ch-chr);
	}
	else{
		printf("char not found");
	}
}