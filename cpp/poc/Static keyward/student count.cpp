using namespace std;
#include<iostream>
class Student{
	char name[20];
	int id;
	char addres[30];
	static int count;
	public:
	Student (){
		strcpy(this->name,"not given");
		this->id=0;
		strcpy(this->addres,"not given");
		count++;
	}
	
		Student (char*name,int id ,char*addres){
		strcpy(this->name,name);
		this->id=id;
		strcpy(this->addres,addres);
		count++;
	}
	void setname(char*name){
		strcpy(this->name,name);
	}
	void setid(int id){
		this->id=id;
	}
	void setaddress(char*addres){
		strcpy(this->addres,addres);
	}
	char* getname(){
		return this->name;
	}
   int setid(){
		return this->id;
	}
	char* setaddress(){
		return this->addres;
	}
	int static getcount(){
		return count;
	}
	void display(){
	  cout<<"name is = "<<this->name<<endl;
	  cout<<"id is   = "<<this->id<<endl;
	  cout<<"Address is = "<<this->addres<<endl; 
	}
	
	
};
    int Student::count=0;
 class Placestudent:public Student{
 	char position[20];
 	public:
 	  Placestudent():Student(){
 	  	strcpy(this->position,"not given");
	   }
	   Placestudent(char*name,int id,char*addres,char*position):Student(name,id,addres){
 	  	strcpy(this->position,position);
	   }
	   void setposition(char*position){
	  strcpy(this->position,position);
	   }
	   char* getposition(){
	   	return this->position;
	   }
	   void display(){
	   	Student::display();
	   	cout<<"position is = "<<this->position;
	   }
 };
 int main(){
 	Student A("ashutosh",12,"pune");
     A.display();
     Placestudent A1("shelke",14,"sungamner","java developer");
     A1.display();
    cout<<"total count of student is = "<<Student::getcount()<<endl;
 }
 