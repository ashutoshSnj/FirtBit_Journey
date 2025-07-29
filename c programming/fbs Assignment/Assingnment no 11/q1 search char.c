#include<stdio.h>
int search(char*);
void main(){
	int size;
	printf("Enter the size of string = ");
	scanf("%d",&size);
	char str[size];
	printf("Enter the string\n");
   // scanf("%s",str);
      getchar();
   	fgets( str,size,stdin);
   	int a=search(str);
   	if(a!=-1){
   		printf("char found at %d index",a);
	   }
	   else{
	   	printf("char not found");
	   }
   	
   }
      int search(char*str)
   	{
   		
	   
	printf("Enter the car = ");
	char ch;
	scanf(" %c", &ch);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==ch){
			return i;
		}
	}
	
	return -1;
}