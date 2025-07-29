#include<stdio.h>
 int mystrlen(char*);
void main(){
	printf("Enter the string size = ");
	int size;
	scanf("%d",& size);
	
	char ass [size];
	printf("Enter the string = ");
//	getchar();
//	fgets(ass,size,stdin);
	scanf("%s",ass);
//	for(int i=0;i<size;i++){
		//scanf("%c",&ass[i]);
	
	printf("length of string is = %d",mystrlen(ass));
	char cha[30]={"ashutosh shelke"};
	printf("\nthis second string length = %d",mystrlen(cha));
}

     int mystrlen(char*ass)
{
	

	int i=0;
	while(ass[i]!='\0')
	{
		i++;
	}
	
	return i;
}
