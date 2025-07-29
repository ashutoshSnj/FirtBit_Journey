using namespace std;
#include<iostream>
struct Player{
	int jno;
	int age;
	char name[20];
	char cn[20];
	void display(){
		cout<<"J no = "<<this->jno<<endl;
		cout<<"Age = "<<this->age<<endl;
		cout<<"Name = "<<this->name<<endl;
		cout<<"country name = "<<this->cn<<endl;
	}
	void setjno(int a){
		this->jno=a;
	}
	void setage(int a){
		this->age=a;
	}
	void setname(char* str){
		strcpy(this->name,str);
	}
	void setcn(char* str){
		strcpy(this->cn,str);
	}
	int getjno(){
		return this->jno;
	}
     int getage(){
		return this->age;
	}
	char* getname(){
		return this->name;
	}
	char* getcn(){
		return this->cn;
	}
	Player(){
		this->jno=0;
		this->age=0;
		strcpy(this->name,"not given");
		strcpy(this->cn,"not given");
	}
	Player(int jno,int age,char*name,char*cn){
		this->jno=jno;
		this->age=age;
		strcpy(this->name,name);
		strcpy(this->cn,cn);
	}
	
};//player end here
struct Cricketplayer:public Player{
	int wicket;
	int runscore;

			void display(){
		Player::display();
		cout<<"Wicket = "<<this->wicket<<endl;
		cout<<"Run Score = "<<this->runscore<<endl;
	}
	 void setwicket(int a){
	 	this->wicket=a;
	 }
	 void setrunscore(int a){
	 	this->runscore=a;
	 }
	 int setwicket(){
	 	return this->wicket;
	 }
	 int setrunscore(){
	 	return this->runscore;
	 }
	 Cricketplayer():Player(){
	 	this->wicket=0;
	 	this->runscore=0;
	 }
	  Cricketplayer(int jno,int age,char*name,char*cn,int wicket,int runscore):Player(jno,age,name,cn){
	  	this->wicket=wicket;
	 	this->runscore=runscore;
	  }
}; //cricket player end here
struct Football:public Player{
	int goal;
	char position[20];
	void display(){
		Player::display();
		cout<<"Goal = "<<this->goal<<endl;
		cout<<"position = "<<this->position<<endl;
	}
	void setgoal(int a){
		this->goal=a;
	}
	void setposition(char*str){
		strcpy(this->position,str);
	}
	int getgoal(){
		return this->goal;
	}
	char* setposition(){
		return this->position;
	}
	 Football():Player(){
	 	this->goal=0;
	 	strcpy(this->position,"not given");
	 }
	 Football(int jno,int age,char*name,char*cn,int goal,char* position):Player(jno,age,name,cn){
	  this->goal=goal;
	 	strcpy(this->position,position);
	 }
};
int main(){
	Cricketplayer s;
	Cricketplayer s1(18,35,"virat kohli","india",85,899);
    s.display();
    s1.display();
	 Football F;
	 Football F1(10,37,"Lionel Messi","Spain",785,"Forward");
	 F.display();
	 F1.display();
	 
}