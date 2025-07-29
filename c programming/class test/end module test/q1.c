#include<stdio.h>
#include<string.h>
void main(){
	int size;
	printf("Enter the size of string = ");
	scanf("%d",&size);
	char str[size];
	printf("\nEnter the string = ");
      getchar();
   	fgets( str,size,stdin);
   	int a=strlen(str);
   	if(str [a-1] =='\n'){
     str[a-1]='\0';
   }
    int count=0;
   for(int i=0;str[i]!='\0';i++){
   	      if(str[i]!=' '){
   	      	count++;
			 }
   	     
   }
     printf("count is %d",count);
}