#include<stdio.h>
void rem(char*);
void main(){
		int size;
	printf("Enter the size of string = ");
	scanf("%d",&size);
	char str[size];
	printf("Enter the string\n");
       getchar();
   	fgets( str,size,stdin);
   	int a=strlen(str);
   	printf("\n%d",a);
   if(str [a-1] =='\n'){
     str[a-1]='\0';
     rem(str);
     printf("%s",str);
     printf("\n%d",strlen(str));
}
}
    void rem(char*str)
   {
   	int i;
   	int j=0;
   	 for(i=0;str[i]!='\0';i++){
   	 	    if(i%2==0){
   	 	    	str[j++]=str[i];
				}
				
		}
		str[j]='\0';
  }