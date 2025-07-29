#include<stdio.h>
void exchanch(char*,int);
void main(){
	int size;
	printf("Enter the size of string = ");
	scanf("%d",&size);
	char str[size];
	printf("Enter the string\n");
      getchar();
   	fgets( str,size,stdin);
   	int a=strlen(str);
   	if(a>0&&str[a-1]=='\n'){
   		str[a-1]='\0';
	   }
   	
   	exchanch(str,size);
   }
       void exchanch(char*str,int size)
   {
   	  char ptr[size+1];
   	  
   	  int i;
   	  for( i=0;str[i]!='\0';i++)
   	  {
   	  	 ptr[i]=str[i];
		 }
		 ptr[i]='\0';
		 int a=strlen(ptr);
		 int temp=ptr[0];
   	  	 ptr[0]=ptr[a-1];
   	     ptr[a-1]=temp;
		 printf("%s",ptr);
   }
   
  