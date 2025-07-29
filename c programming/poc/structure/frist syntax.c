#include<stdio.h>
#include<string.h>
struct Student{
	int id;
	char name[10];
	double no;
	char Gender[4];
};

void main(){
	struct Student s1;{
	
	  s1.id=12;
	  strcpy (s1.name,"Ashutosh");
	  s1.no=8010635287;
	  strcpy(s1.Gender,"male");
	printf("\n%d",s1.id);
	printf("\n%s",s1.name);
	printf("\n%lf",s1.no);
	printf("\n%s",s1.Gender);
}
	struct Student s2;
	printf("\nEnter the id = ");
	scanf("%d",&s2.id);
	printf("Enter your name = ");
	scanf("%s",s2.name);
	printf("Enter your no = ");
	scanf("%lf",&s2.no);
	printf("Enter the Gender = ");
	scanf("%s",s2.Gender);
	printf("\n%d",s2.id);
	printf("\n%s",s2.name);
	printf("\n%lf",s2.no);
	printf("\n%s",s2.Gender);
	
	printf("\nEnter the id which is update in s1 ");
	scanf("%d",&s1.id);
	printf("Updated id of s1 is = %d",s1.id);

  
}