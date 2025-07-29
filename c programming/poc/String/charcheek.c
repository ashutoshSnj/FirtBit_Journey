#include<stdio.h>
void main(){
	char ch[10]={"Ashutosh"};
	printf("Enter the char which is cheek = ");
	char cheek;
	scanf(" %c",& cheek);
	int i=0;
	int flag=1;
	while(ch[i]!='\0')
	{
		if(ch[i]==cheek){
			printf("\nfound at the %d index",i);
			flag=0;
		
			break;
			}
		i++;
	}
	if(flag==1){
		printf("no not found");
	}
	
	
} 

