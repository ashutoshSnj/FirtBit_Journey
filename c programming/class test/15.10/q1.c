#include<stdio.h>
#include<string.h>
void main(){
	int  userid;
	char password[10];
	printf("Enter the userid = ");
	scanf("%d",&userid);
     int myid=12;
     char mypassword[10]={"Ashutosh"};
     if(userid==myid){
     		printf("Enter the password = ");
	        scanf("%s",password);
     	int x=strcmp(mypassword,password);
     	      if(x==0)
			   {
     	      	    int a=2563;
     	      	    printf("Enter this same no = %d\n",a);
     	      	    int b;
     	      	    scanf("%d",&b);
     	      	    if(a==b){
     	      	    	printf("Success");
					   }
					   else{
					   	printf("faild");
					   }
			   }
			   else{
			   	printf("Wrong password");
			   }
	 }
	 else{
	 	printf("Wrong user id");
	 }
}