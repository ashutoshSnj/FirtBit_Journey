#include<stdio.h>
void cheek();
void assign();
void main(){
	//cheek();
	assign();
	
}      void cheek()
	{
		printf("that cheek the where is null");
	char ch[5]={'a','b'};
	for(int i=0;i<5;i++){
		if(ch[i]=='\0'){
			printf("\nheloo");
			break;
		}
		else{
			printf("\n%c",ch[i]);
		}
	}
}
	void assign(){
		char as[5]={"Ashutosh"};
	  printf("\n%s",as);
	  char s[]={'a','r'};
	  printf("\n%s",s);
		
	}
