#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of string = ");
	scanf("%d",&size);
	char str[size];
	printf("Enter the string\n");
       getchar();
   	fgets( str,size,stdin);
   	int a=strlen(str);
   	if(str[a-1]=='\n'){
   		str[a-1]='\0';
	   }
	   removeno(str);
}
   removeno(char*str){
   	  int i,j=0;
   	  int a;
   	  printf("Enter the no of index");
   	  scanf("%d",&a);
   	  for(i=0;str[i]!='\0';i++){
   	  	    if(i!=a){
   	  	    	str[j++]=str[i];
				 }
		 }
		str[j]='\0';
		 printf("%s",str);
   }