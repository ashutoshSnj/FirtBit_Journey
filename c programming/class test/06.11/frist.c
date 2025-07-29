#include<stdio.h>
typedef struct Student{
	char name[20];
	int roll_no;
	float marks[3];
}Student;
void store(Student*,int);
void display(Student*,int);
void top(Student*,int);
void main(){
	Student str[5];
	store(str,5);
	display(str,5);
	top(str,5);
}
   void store(Student*str,int size){
   	int i,j;
   	  for(i=0;i<size;i++){
   	  	printf("Enter the name = ");
   	  	scanf("%s",str[i].name);
   	  	printf("Enter the roll no = ");
   	  	scanf("%d",&str[i].roll_no);
   	  	printf("Enter the marks = ");
   	  	for(j=0;j<3;j++){
   	  		scanf("%f",&str[i].marks[j]);
			 }
		 }
  	
  }
  void display(Student*str,int size){
   	int i,j;
   	  for(i=0;i<size;i++){
   	  	printf("\n%s",str[i].name);
   	  	printf("\n%d",str[i].roll_no);
   	  	for(j=0;j<3;j++){
   	  	   printf("\n%f",str[i].marks[j]);
			 }
		 }
  	
  }
  void top(Student*str,int size){
  	int i,j,b=0,a,temp;
  	for( i=0;i<size;i++){
   a=0;
  		for(j=0;j<3;j++){
  			a+=str[i].marks[j];
		  }
		   if(a>b){
	  	b=a;
	  	temp=i;
	   }
	  }
	   printf("\n max marks student is = ");
	   
	   display(&str[temp],1);
	   
	   
	  
  	
  }
  