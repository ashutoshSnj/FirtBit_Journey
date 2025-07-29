#include<stdio.h>
void main(){
  	int size;
	printf("Enter the size of string = ");
	scanf("%d",&size);
	char str[size];
	printf("Enter the string\n");
   // scanf("%s",str);
      getchar();
   	fgets( str,size,stdin);
   	 for(int i=0;str[i]!='\0';i++){
   	 	   if(str[i]=='a')
   	 	    str[i]='$';
		}
		printf("%s",str);
}