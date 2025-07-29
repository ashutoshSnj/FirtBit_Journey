#include<stdio.h>
int ovels(char*,int);
void main(){
	int size;
	printf("Enter the size of string = ");
	scanf("%d",&size);
	char str[size];
	printf("Enter the string\n");
      fflush(stdin);
   	fgets( str,size,stdin);
   	int b=strlen(str);
   	if(str [b-1] =='\n'){
     str[b-1]='\0';
   }
   int a=ovels(str,size);
  
   printf("In given string %d vovels are present",a);
}
  int ovels(char*ptr,int size)
{
     int i,j,count=0;
     char str[]={"aeiouAEIOU"};
     int a=strlen(str);
     //printf("%d",a);
	 for(i=0;ptr[i]!='\0';i++)	{
	      for(int j=0;str[j]!='\0';j++){
	      	 if(ptr[i]==str[j]){
	      	 	count++;
			   }
		  }
	 }
	 return count;
}