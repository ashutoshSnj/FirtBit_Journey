#include<stdio.h>
//int display(char*,char*);
void main(){
		int size;
	printf("Enter the size of string = ");
	scanf("%d",&size);
	char str[size];
	printf("Enter the string\n");
       getchar();
   	fgets( str,size,stdin);
   	
   	int a=0;
   	while(str[a]!='\0'){
   		a++;
	   }
   	if(str[a-1]=='\n'){
   		str[a-1]='\0';
	   }
   		int size1;
	printf("Enter the size of string = ");
	scanf("%d",&size1);
	char btr[size];
	printf("Enter the string\n");
       getchar();
   	fgets( btr,size1,stdin);
   	
  int b=0;
   	while(btr[b]!='\0'){
   		b++;
	   }
   	if(btr[b-1]=='\n'){
   		btr[b-1]='\0';
	   }
	   if(a>b){
	   	printf("string frist is greter");
		   	printf("\n%s",str);
	   	
	   }
	   else if (a<b){
	   	printf("string second is greter");
		   
		   	printf("\n%s",btr);
	   }
	   else{
	   	   printf("String are equal");
	   }
}
	/*   if(display(str,btr)){
	   	
	   		printf("string frist is greter");
		   	printf("\n%s",str);
		   
	   }
	   else{
	   	printf("string second is greter");
		   
		   	printf("\n%s",btr);
	
	   	
	   }
}
  int display(char*str,char*btr){
  	int count=0;
  	int count1=0;
  	int i,j;
  	for(i=0;str[i]!='\0';i++){
  		count++;
	  }
	  for(i=0;btr[i]!='\0';i++){
  		count1++;
	  }
	  if(count>count1){
	  	return 1;
	  }
	  else {
	  	return 0;
	  }
  }*/