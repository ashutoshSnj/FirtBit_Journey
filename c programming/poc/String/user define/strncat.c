#include<stdio.h>
void mystrncat(char*,char*,int);
void main(){
	char ass[20]={"da"};
	char bss[]={"tu rathod"};
	int a=4;
	mystrncat(ass,bss,a);
	printf("%s",ass);
}
  void mystrncat(char*ass,char*bss,int no){
  	int i=0;
  	int a=strlen(ass);
  	while(i<no){
  		   ass[a++]=bss[i];
  		   i++;
  		   
	  }
	  ass[a]='\0';
  }