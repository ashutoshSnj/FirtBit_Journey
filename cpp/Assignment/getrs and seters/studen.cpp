#include<stdio.h>
#include<string.h>
struct Student{
	int rollno;
	char name[20];
	int marks;
	void display(){
		printf("\n%d",this->rollno);
		printf("\n%s",this->name);
     	printf("\n%d",this->marks);
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
	
};
 main(){
	Student stu,stu1;
	stu.setrollno(10);
	stu1.setrollno(20);
	stu.setmarks(45);
	//char arr[10]={"Ashutosh"};
	//stu.setname(arr);
	stu.setname("Ashutosh");
	stu1.setname("shelke");
   //  stu.setmarks();
    // stu1.setmarks();
   //  stu.display();
     //stu1.display();
 // printf("%s",stu.getname());
  //   printf("%d\n%d",stu.getroll(),stu1.getroll());
     if(stu.getroll()<stu1.getroll()){
     	printf("stu student is old stu");
     	
	 }
	 else{
	 	printf("stu1 student is new student");
	 }
	}
    
    
    