
#include<stdio.h>
#include<string.h>
struct Student{
	int rollno;
	char name[20];
	int marks;
	void display(){
		printf("\n roll no = %d",this->rollno);
		printf("\n name is = %s",this->name);
		printf("\n marks is = %d",this->marks);
	}
	void setrollno(int a){
		this->rollno=a;
	}
	void setname(char* ass){
		strcpy(this->name,ass);
	}
	void setmarks(int m){
        this->marks=m;
	}
	int getroll(){
		return this->rollno;
	}
	  char* getname(){
	  	return this->name;
	  }
	  int getmarks(){
	return this->marks;
	  }
	  Student(){
   	this->rollno=0;
	   strcpy(this->name,"not given");	
	   this->marks=0;
       
     }
     Student(int a,char*str,int arr){
   	this->rollno=a;
	   strcpy(this->name,str);	
	   this->marks=arr;
       
     }
	
};
 main(){
	Student stu;
	stu.setrollno(1);
	stu.setname("Ashutosh");
	stu.setmarks(88);
	stu.display();
	Student stu1(2,"shubham",87);
	stu1.display();

}
    
    
    