#include<stdio.h>
#include<string.h>
struct Student{
	int rollno;
	char name[20];
	void display(){
		printf("\n%d",this->rollno);
		printf("\n%s",this->name);
	}
};
 main(){
	Student stu;
	stu.rollno=1;
strcpy(stu.name,"Ashutosh");
    stu.display();
}