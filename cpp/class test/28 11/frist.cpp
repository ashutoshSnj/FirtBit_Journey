using namespace std;
#include<iostream>
class Student {
	int rollno;
	char name[20];
	char addrese[100];
	public:
		void display(){
			cout<<"roll no = "<<this->rollno<<endl;
			cout<<"name is = "<<this->name<<endl;
			cout<<"address is = "<<this->addrese<<endl;
		}
		void setrollno(int a){
			this->rollno=a;
		}
		void setname(char*str){
			strcpy(this->name,str);
		}
		void setaddres(char*str){
			strcpy(this->addrese,str);
		}
	    int getrollno(){
			return this->rollno;
		}
		char* setname(){
			return this->name;
		}
		char* setaddres(){
			return this->addrese;
		}
		Student(){
		this->rollno=0;
		strcpy(this->name,"not given");
		strcpy(this->addrese,"not given");
		}
			Student(int a,char*str,char*ptr){
		this->rollno=a;
		strcpy(this->name,str);
		strcpy(this->addrese,ptr);
		}
		void grade(int a,int b,int c){
			float grade=(a+b+c)/3.0;
		
			if(grade<=100&&grade>=80){
				cout<<"percenttag = "<<grade<<"%"<<endl;
				cout<<"Grade = Excellent";
			}
			else if(grade>=65&&grade<80){
			cout<<"percenttag = "<<grade<<"%"<<endl;
				cout<<"Grade = Good";
			}
			else if(grade>=50&&grade<65){
				cout<<"percenttag = "<<grade<<"%"<<endl;
				cout<<"Grade = pass";
			}
			else{
				cout<<"percenttag = "<<grade<<"%"<<endl;
				cout<<"Grade = fail";
			}
		}
		
		
};
int main(){
	int rollno;
	char name[20];
	char address[30];
		int sub1,sub2,sub3;
	cout<<"Enter the roll no = ";
	cin>>rollno;
	cout<<"Enter the name = ";
	cin.ignore();
	cin.getline(name,30);
	cout<<"Enter the address = ";
	cin.getline(address,30);
	cout<<"Enter the 3 sub marks = ";
	cin>>sub1;
	cin>>sub2;
	cin>>sub3;	
	Student S(rollno,name,address);
	S.display();
     S.grade(sub1,sub2,sub3);
}