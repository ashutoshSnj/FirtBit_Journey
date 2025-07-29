#include<stdio.h>
#include<string.h>
struct Student{
	int rollno;
	char name[20];
	int marks[6];
	void display(){
		printf("\n%d",this->rollno);
		printf("\n%s",this->name);
		printf("\nThis is marks of 6 sub ");
		for(int i=0;i<6;i++){
			printf("\n%d",this->marks[i]);
		}
	}
};
 main(){
	Student stu;
	stu.rollno=1;
strcpy(stu.name,"Ashutosh");
stu.marks[0]=40;
stu.marks[1]=30;
stu.marks[2]=45;
stu.marks[3]=50;
stu.marks[4]=80;
stu.marks[5]=40;
    stu.display();
}