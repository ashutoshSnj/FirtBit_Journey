#include<stdio.h>
void main(){
	char str[10]={"ASHUtush"};
	char btr[10]={"ASHUTOSH"};
	  int a= strncasecmp(str,btr,4);
	  if(a==0){
	  	printf("Equal string");
	  }
	  else if(a>0)
	  {
	  	printf("str is greter");
	  }
	  else{
	  	printf("str is less");
	  }
}