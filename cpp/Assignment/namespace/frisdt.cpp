#include<iostream>
using namespace std;
namespace SY{
	class SYMARKS{
    double 	computer_total; 
    double mathstotal;
	double  electronicstotal;
	public:
	SYMARKS(){
		this->computer_total=0;
		this->mathstotal=0;
		this->electronicstotal=0;
	}
	void display(){
		cout<<this->computer_total<<endl;
		cout<<this->mathstotal<<endl;
		cout<<this->electronicstotal<<endl;
	}
	SYMARKS(double a,double b,double c){
		this->computer_total=a;
		this->mathstotal=b;
		this->electronicstotal=c;
	}
	void setcomputertotal(double a){
		this->computer_total=a;
	}
	void setmathstotal(double a){
		this->mathstotal=a;
	}
	void setelsectronictotal(double a){
		this->electronicstotal=a;
	}
	double getelsectronictotal(){
		return this->electronicstotal;
	}
	double getmathtotal(){
		return this->mathstotal;
	}
	double getcompputertotal(){
		return this->electronicstotal;
	}
	};//Sy marks end here
}
namespace TY{
	class TYMarks {
		double theory;
        double Practical;
        public:
        TYMarks(){
        	this->theory=0;
        	this->Practical=0;
		}
		TYMarks(double a,double b){
        	this->theory=a;
        	this->Practical=b;
		}
		void settheory(double a){
			this->theory=a;
		}
		void setpractical(double b){
			this->Practical=b;
		}
		double gettheory(){
			return this->theory;
		}
		double getpractical(){
			return this->Practical;
		}	
	};
}
using namespace SY;
using namespace TY;
class Student {
	int rollno;
	char name[30];
    SY::SYMARKS sym;
    TY::TYMarks tym;
    public :
    Student(){
    	this->rollno=0;
    	strcpy(this->name,"not given");
    	this->sym.setcomputertotal(0);
    	this->sym.setelsectronictotal(0);
    	this->sym.setmathstotal(0);	
    	this->tym.settheory(0);
    	this->tym.settheory(0);
	}
	Student(int rollno,char*name,SYMARKS sy,TYMarks ty){
    	this->rollno=rollno;
    	strcpy(this->name,name);
    	this->sym.setcomputertotal(sy.getcompputertotal());
    	this->sym.setmathstotal(sy.getmathtotal());	
    	this->sym.setelsectronictotal(sy.getmathtotal());
    	this->tym.setpractical(ty.gettheory());
    	this->tym.settheory(ty.gettheory());
    
	}
	double calmark(){
	 double totalmark=this->sym.getcompputertotal()+(this->tym.gettheory()+this->tym.getpractical());
	 return totalmark;
	}
	// double totalmark=this->sym.getcompputertotal()+(this->tym.gettheory()+this->tym.getpractical());
	 void Result(){
	 	
	  if(calmark()>=70){
	  	cout<<"Gread A "<<endl;
	  }
	  else if(calmark()>=60){
	  	cout<<"Gread B"<<endl;
	  }
	   else if(calmark()>=50){
	  	cout<<"Gread C"<<endl;
	  }
	   else if(calmark()>=40){
	  	cout<<"Pass"<<endl;
	  }
	  else {
	  	cout<<"Fail"<<endl;
	  }
	  
	 }
	void display(){
		cout<<"Roll No = "<<this->rollno<<endl;
		cout<<"Name is = "<<this->name<<endl;
		cout<<"Computer Total = "<<this->sym.getcompputertotal()<<endl;
		cout<<"Math Total Mark = "<<this->sym.getmathtotal()<<endl;
		cout<<"Electronics Total Marks "<<this->sym.getelsectronictotal()<<endl;
		cout<<"Theory Marks = "<<this->tym.gettheory()<<endl;
		cout<<"Practical Marks = "<<this->tym.getpractical()<<endl;
		//cout<<"Gread = ";
		//this->Result();
	}
};
int main(){
	SYMARKS S(90,78,56);
	TYMarks T(30,56);
	Student S1(1,"Ashutosh Shleke",S,T);
	S1.display();
	cout<<"Result is = ";
	S1.Result();
	
	
}