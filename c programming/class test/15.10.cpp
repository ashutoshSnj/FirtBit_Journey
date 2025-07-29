#include<stdio.h>
void main(){
	int userid,password;
	printf("Enter the userid = ");
	scanf("%d",&userid);
	printf("Enter the password = ");
	scanf("%d",&password);
     int myid=12;
     int mypassword=1456;
     if(userid==myid){
     	      if(mypassword==password){
     	      	    int a=2563;
     	      	    printf("Enter this same no = %d",a);
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