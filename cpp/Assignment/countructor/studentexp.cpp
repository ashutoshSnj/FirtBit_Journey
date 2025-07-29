#include<iostream>
using namespace std;
class student {
	int roll;
	int marks;
	char name[30];
	public:
		student(){
			this->roll=0;
			this->marks=0;
			strcpy(this->name,"not given");
		}
		student(int roll,int marks,char*str){
			this->roll=roll;
		}
		void display(){
			cout<<"roll "<<this->roll<<endl;
			cout<<"marks "<<this->marks<<endl;
			cout<<"name is "<<this->name<<endl;
				}
			
};
int main(){
	student S(12,45,"sfiduv");
	
	S.display();
}