#include<stdio.h>
#include<string.h>

struct Student{
	int id;
	char name[20];
	int marks[6];
	
};

void main(){
	struct Student s1;
	
	  s1.id=4002;
	  strcpy (s1.name,"Ashutosh");
       s1.marks[6];
	   int ch[6]={14,25,45,85,96,70};
	   for(int i=0;i<6;i++){
	   	s1.marks[i]=ch[i];
	   }
	printf("\n Roll no = %d",s1.id);
	printf("\n name = %s",s1.name);
	printf("\n This is marks = ");
     for(int i=0;i<6;i++){
     	printf(" %d",s1.marks[i]);
	 }

	struct Student s2;
	printf("\nEnter the Roll = ");
	scanf("%d",&s2.id);
	printf("Enter your name = ");
	scanf("%s",s2.name);
	printf("\nEnter the marks = ");
	for(int i=0;i<6;i++){
		scanf("%d",&s2.marks[i]);
	}

	printf("\nRoll no is = %d",s2.id);
	printf("\n name is = %s",s2.name);
		printf("\n This is marks");
		for(int i=0;i<6;i++){
		printf("\n%d",s2.marks[i]);
	}

	


  
}