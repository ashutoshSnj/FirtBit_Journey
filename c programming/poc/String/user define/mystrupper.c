#include<stdio.h>
void mystrupper(char*);
void main(){
	char str[55]={"ashutosh shelke"};
	mystrupper(str);
	printf("%s",str);
	
}
 void mystrupper(char*str){
  	int i=0;
  	char ch;
  	while(str[i]!='\0'){
  		if('a'<=str[i]&&str[i]<='z'){
		  //str[i]= toupper (str[i]);
		  str[i]=str[i]-32;
		  
  		     }
  		      i++;
  		  }
	
}