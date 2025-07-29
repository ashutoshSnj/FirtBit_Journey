#include<stdio.h>
void main(){
	int no;
	printf("Enter the no = ");
	scanf("%d",&no);
	int flag=1;
	if(no<=1){
	  printf("no not prime");
	
	}
	else{
		
	
	for(int i=2;i<no;i++){
	    if(no%i==0){
	    	printf("no not prime");
	    	flag=0;
	    	break;
		}
	}
	if(flag){
		printf("no prime");
	}
}
}