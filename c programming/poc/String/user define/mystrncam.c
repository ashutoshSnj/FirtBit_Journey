#include<stdio.h>
void main(){
	  char str[10]={"Ashui"};
	  char btr[10]={"Ashu"};
	  int no=5;
	 
	 int a= mystrncam(str,btr,no);
	 //printf("%d",a);
	  	if(a>0){
		printf("str is greter");
	}
	else if(a<0){
		printf("str is smaller");
	}
	else{
		printf("equal string");
	}
}
   int mystrncam(char*str,char*btr,int no){
   	int a=strlen(str);
   	int b=strlen(btr);
   	//printf("%d\n%d",a,b);
   	
	   
   	        int i=0;
   	    while(i<no&&str[i]!=0 &&btr[i]!=0){
   	    	    if(str[i]==btr[i]){
   	    	    	i++;
   	    	    	continue;
				   }
				  else if(str[i]>btr[i]){
				   	return 1;
				   }
				   else if (str[i]<btr[i]){
				   	return -1;
				   } 	
				   
		   }
		   if(i==no){
		   	return 0;
		   }
		   
		   if(str[i]=='\0'&&btr[i]!='\0'){
		   	return -1;
		   }
		   else if (btr[i]=='\0'&&str[i]!='\0'){
		   	return 1;
		   }
		
		   }
	
		   
   	
   