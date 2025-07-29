#include<stdio.h>
int countchar(char*);
void main(){
	int size;
	printf("Enter the size of string = ");
	scanf("%d",&size);
	char str[size];
	printf("Enter the string\n");
     fflush(stdin);
   	fgets( str,size,stdin);
   int a=strlen(str);
   if(str [a-1] =='\n'){
     str[a-1]='\0';
     printf("Total char present in string is = %d ",countchar(str));
   
   }
}
   int countchar(char*str){
   	int count=0;
   	for(int i=0;str[i]!='\0';i++){
   		    if(str[i]!=' '){
   		    	count++;
			   }
	   }
	   return count;
	  // printf("%d",count);
   }