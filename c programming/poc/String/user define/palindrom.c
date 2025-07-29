#include<stdio.h>
#include<string.h>
 int mystrrev(char*);
void main(){
	int size;
	printf("Enter the size of string = ");
	scanf(" %d",&size);
	 char str[size];
	printf("Enter the string = ");
     scanf("%s",str);
  	int a = mystrrev(str);
  	if(a==0){
  		printf("\nString are palindrom");
	  }
	  else {
	  
	  printf("\nString not palindrom");
}
	}
	
     int mystrrev(char*str)
{

	int a=strlen(str);
	char rev[a+1];
	int j=a-1;
     int i=0;
       while(i<a)
	   {
       	rev[i]=str[j];
       	 
       	  i++;
       	  j--;
	   }
	  // printf("%d",i);
	     rev[i]='\0';
	   //printf("%s",rev);
	 int b = strcmp(str,rev);
	 return b;
}