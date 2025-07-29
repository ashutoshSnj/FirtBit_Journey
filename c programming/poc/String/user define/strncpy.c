#include<stdio.h>
void mystrncopy(char*,char*,int);

void main(){
	char str[10]={"Ashutosh"};
	char atr[20]={};
	int no=1;
	mystrncopy(atr,str,no);
	printf("%s",atr);
}
  void  mystrncopy(char*shh,char*chh,int no){
   	     int i=0;
   	     while(i<no)
   	     {
   	     	shh[i]=chh[i];
   	     	i++;
   	     	//printf("%d",i);
			}
			shh[i]='\0';
   }