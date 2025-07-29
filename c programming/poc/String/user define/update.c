#include<stdio.h>
char* mystrchr(char*,char*);
void main(){
	char chh[10]={"Ashutosh"};
	char a='u';

	char *b=mystrchr(chh,&a);

	if(b){
	
		*b='U';
		printf("%s",chh);
}
	else if(b=='\0')
	{
		printf("char not found");
	}
	
}
  char* mystrchr(char*chh, char*ch){
	int a=strlen(chh);
	int i=a;

	for(i=a;i>=0;i--){
		if(chh[i]==*ch){
		return &chh[i];	
	}
	
	 }
	 return '\0';
}