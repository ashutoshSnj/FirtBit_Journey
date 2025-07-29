#include<stdio.h>
void main(){
	char chh[40]={"ashut"};
	char abb[30]={"sfff"};
	 mystrcan(chh,abb);
	 printf("%s",chh);
	}
void mystrcan(char*chh,char*abb)
{

	 int a=strlen(chh);
	int i=0;
	      while(abb[i]!='\0')
	  {
	  	chh[a++]=abb[i];
	  	i++;
	  }
	  chh[a]='\0';
	  //printf("%s",chh);
	       
	
}