using namespace std;
#include<string.h>
#include<iostream>
class verification{
	char username[20];
	char password [20];
	public:
	void setusername(char*str){
		strcpy(this->username,str);
	}
	void setpassword(char* ptr){
		strcpy(this->password,ptr);
	}
	char* getusername(){
		return this->username;
	}
	char* getpassword(){
		return this->password;
	}
	verification(){
		strcpy(this->username,"not given");
	strcpy(this->password,"not given");
	}
    verification(char*username,char*pass){
	strcpy(this->username,username);
	strcpy(this->password,pass);
	}
	void newverification(char*username,char*pass){
		
	     int a=strcmp(this->getpassword(),pass);
	     int b=strcmp(this->getusername(),username);
	     int otp=0;
	     if(a==0&&b==0){
	     	cout<<"otp is = 2343"<<endl;
			 cout<<"Enter this otp = ";
			 cin>>otp;
			 if(otp==2343){
			 	cout<<"login succsefully..."<<endl;
			 }
			 else{
			 	cout<<"wrong otp"<<endl;
			 }
		 }
		 else{
		 	cout<<"wrong username or password";	
		 }
	}
	};
	int main(){
	 /*verification *ptr=new verification[10];
	 ptr[0].setusername("shelke");
	 ptr[0].setpassword("pass");
	ptr[0].newverification("shelke","ass");*/
	verification v("ashutosh","wesf");
	char username[20];
	char pass[20];
	cout<<"Enter username and pass"<<endl;
	cin>>username;
	cin>>pass;
	 v.newverification(username,pass);
//	verification *str=new verification("efhn","wegvd");
	}