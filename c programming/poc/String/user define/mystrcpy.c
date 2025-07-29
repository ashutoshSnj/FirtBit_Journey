#include<stdio.h>
void mystrcopy(char*,char*);

void main(){
	char str[10]={"Ashutosh"};
	char atr[20]={};
	mystrcopy(atr,str);
	printf("%s",atr);
}
  void  mystrcopy(char*shh,char*chh){
   	     int i=0;
   	     while(chh[i]!='\0')
   	     {
   	     	shh[i]=chh[i];
   	     	i++;
			}
			shh[i]='\0';
   }