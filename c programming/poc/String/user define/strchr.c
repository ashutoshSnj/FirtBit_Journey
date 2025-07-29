#include<stdio.h>
int mystrchr(char*, char);
void main(){
	char chh[10]={"Ashutosh"};
	char ch='s';
	int a=mystrchr(chh,ch);
	if(a!=-1){
		printf("char found at %d index",a);
	}
	else{
		printf("char not found");
	}
	
}
  int mystrchr(char*chh, char ch){
	
	int i=0;
	while(chh[i]!='\0')
	{
	
		if(chh[i]==ch){
			return i;
		//	printf("%d",chh[i]);
	        
		}
		i++;
	}
	 if(chh[i]=='\0')
	 {
	
	   return -1;
	 }
	 
}