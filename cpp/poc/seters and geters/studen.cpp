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
	void setrollno(int a){
		this->rollno=a;
	}
	void setname(char* ass){
		strcpy(this->name,ass);
	}
	void setmarks(){
		int m;
		printf("Enter the marks = ");
	for(int i=0;i<6;i++){
		  scanf("%d",&m);
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
	
};
 main(){
	Student stu,stu1;
	stu.setrollno(10);
	stu1.setrollno(20);
	//char arr[10]={"Ashutosh"};
	//stu.setname(arr);
	stu.setname("Ashutosh");
	/*String Literal Storage: When you use a string literal like "Ashutosh" in your code, 
	the compiler allocates memory for this literal in a specific area of memory, often in the read-only data segment. 
	This memory area is persistent for the duration of the program.*/
	
/*	Function Call: When you pass "Ashutosh" to setname,
	 it gets converted to a char* pointing to the address of this string literal in memory. 
	 So, ass in setname now points to the memory location where "Ashutosh" is stored.

Copying the String: Inside the setname function, strcpy(this->name, ass);
 copies the content of "Ashutosh" from the read-only memory location (pointed to by ass) into 
 the model_name member of your object (which should be allocated elsewhere in memory).*/
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
    
    
    