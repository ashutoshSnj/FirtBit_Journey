#include<stdio.h>
#include <ctype.h>
int  mystrcasecmp(char*,char*,int);
void main(){
	char str[]={"ashuT"};
	char btr[]={"ASHU"};
	int no=5;
	  int a= mystrcasecmp(str,btr,no);
	  //printf("%d",a);
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
	int  mystrcasecmp(char*str,char*btr,int no){
		char dm1[no+1];
		char dm2[no+1];
		int i=0;
	    int j=0;
		for(i=0;i<no&&str[i]!='\0';i++){
			dm1[i]= toupper (str[i]);
		}
		dm1[i]='\0';
	     	for(j=0;j<no&&btr[j]!='\0';j++){
			dm2[j]= toupper(btr[j]);
		}	
		dm2[j]='\0';
	int a= strcmp(dm1,dm2);
	   return a;
		//printa("%d",a);
	}