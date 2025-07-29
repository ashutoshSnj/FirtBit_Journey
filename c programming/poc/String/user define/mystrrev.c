#include<stdio.h>
 void  mystrrev(char*);
void main(){
	 char str[20]={"hsotuhsa"};
	  mystrrev(str);
	}
     void  mystrrev(char*str)
{
     int i=0;
	 int a=strlen(str);
	 int j=(a-1);
	 //printf("%d",a);
       while(i<a/2){
       	  char temp= str[i];
       	  str[i]=str[j];
       	  str[j]=temp;
       	  i++;
       	  j--;
	   }
	   //str[a]='\0';
	   printf("%s",str);
	 
}