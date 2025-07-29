#include<stdio.h>
#include<string.h>
 int palindrom(char*,int );
void main(){
	int size;
	printf("Enter the size of string = ");
	scanf("%d",&size);
	char str[size];
	printf("Enter the string\n");
      fflush(stdin);
   	fgets( str,size,stdin);
   	int b=strlen(str);
   	if(str [b-1] =='\n'){
     str[b-1]='\0';
     int a=palindrom(str,size);
     if(a==0){
     	printf("String are palindrom");
	 }
	 else{
	 	printf("string no palindrom");
	 }
     
     
}
 
} 
      int palindrom(char*str,int size){
      	   int a=strlen(str);
      	   char ptr[size+1];
      	   int i;
      	   int j=a-1;
      	   for(i=0;str[i]!='\0';i++){
      	   	     ptr[i]=str[j--];
			 }
			 ptr[i]='\0';
			 int b= strcmp(str,ptr);
			 //printf("%d",b);
			 return b;
	  }