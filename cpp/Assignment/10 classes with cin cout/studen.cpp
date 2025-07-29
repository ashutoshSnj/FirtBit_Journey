using namespace std;
#include<iostream>
#include<string.h>
struct Student{
	int rollno;
	char name[20];
	int marks[6];
	void display(){
	       cout<<"\n"<<this->rollno;
		cout<<"\n"<<this->name;
		cout<<"\nThis is marks of 6 sub ";
		for(int i=0;i<6;i++){
			cout<<"\n"<<this->marks[i];
		}
	}
	void setrollno(int a){
		this->rollno=a;
	}
	void setname(char* ass){
		strcpy(this->name,ass);
	}
	void setmarks(){
		int m;
		cout<<"Enter the marks = ";
	for(int i=0;i<6;i++){
		  cin>>m;
        this->marks[i]=m;
	}
	}
	int getroll(){
		return this->rollno;
	}
	  char* getname(){
	  	return this->name;
	  }
	  int* getmarks(){
	return this->marks;
	  }
	  Student(){
   	this->rollno=0;
	   strcpy(this->name,"not given");	
	   for(int i=0;i<6;i++){
	   this->marks[i]=0;
       }
     }
     Student(int a,char*str,int*arr){
   	this->rollno=a;
	   strcpy(this->name,str);	
	   for(int i=0;i<6;i++){
	   this->marks[i]=arr[i];
       }
     }
	
};
 main(){
	Student stu;
	stu.setrollno(1);
	stu.setname("Ashutosh");
	stu.setmarks();
	stu.display();
	int mr[6]={50,56,45,89,69,85};
	Student stu1(2,"shubham",mr);
	stu1.display();

}
    
    
    