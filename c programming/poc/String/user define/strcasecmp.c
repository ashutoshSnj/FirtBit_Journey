#include<stdio.h>
int  mystrcasecmp(char*,char*);
void main(){
	char str[]={"ashu"};
	char btr[]={"ASHU"};
	  int a= mystrcasecmp(str,btr);
	   if(a==0){
	   	printf("String are equal");
	   }
	   else if(a>0){
	   	printf("str is greter");
	   }
	   else {
	   	printf("str is smaller");
	   }
	}
	int  mystrcasecmp(char*str,char*btr){
		char dm1[100];
		char dm2[100];
		int i=0;
		for(i=0;str[i]!='\0';i++){
			dm1[i]= toupper (str[i]);
		}
		dm1[i]='\0';
		int j=0;
		for(j=0;btr[j]!='\0';j++){
			dm2[j]= toupper(btr[j]);
		}
		dm2[j]='\0';
	   int a= strcmp(dm1,dm2);
	   return a;
		
	}