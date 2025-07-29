#include<stdio.h>
void mystrlower(char*);
void main(){
	char str[55]={"ASHUTOSH SHELKE"};
	mystrlower(str);
	printf("%s",str);
	
}
 void mystrlower(char*str){
  	int i=0;
  	char ch;
  	while(str[i]!='\0'){
  		if('A'<=str[i]&&str[i]<='Z'){
		  //str[i]= tolower (str[i]);
		  str[i]=str[i]+32;
		  
  		     }
  		      i++;
  		  }
	
}