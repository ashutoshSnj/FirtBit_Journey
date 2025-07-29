#include<stdio.h>
int mystrchr(char*, char);
void main(){
	char chh[10]={"Ashutosh"};
	char ch='A';
	int a=mystrchr(chh,ch);
	if(a!=-1){
		printf("char found at %d index",a);
	}
	else{
		printf("char not found");
	}
	
}
  int mystrchr(char*chh, char ch){
	int a=strlen(chh);
	int i=a;

	for(i=a-1;i>=0;i--){
		if(chh[i]==ch){
			return i;
	}
	
	 }
	 return -1;
}