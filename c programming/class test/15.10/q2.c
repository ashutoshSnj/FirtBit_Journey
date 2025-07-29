#include<stdio.h>
#include<string.h>
void revers(char*);
void main(){
	printf("Enter the size of string = ");
	int size;
	scanf("%d",&size);
	char str[size];
	printf("Enter the string = ");
	getchar();
	fgets(str,size,stdin);
	
	int a=strlen(str);
	if(str[a-1]=='\n'){
		str[a-1]='\0';
	}
      revers(str);
	
}
    void revers(char*str){
    	int x=strlen(str);
    	int j=x-1;
    	int i;
    	for( i=0;i<x/2;i++){
    		char temp=str[i];
    		str[i]=str[j];
    		str[j]=temp;
    		j--;
			}
		//	str[i]='\0';
	
		printf("%s",str);
	}