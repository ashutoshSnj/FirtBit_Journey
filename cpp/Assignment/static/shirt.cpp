#include<iostream>
using namespace std;
class Shirt{
int sid;
char sname[20];
char type[20];
double price;
char size[20];
static double dis_percent;
static int count;
public:
	void display(){
		cout<<"Shirt id is = "<<this->sid<<endl;
		cout<<"Shirt name = "<<this->sname<<endl;
		cout<<"Type is = "<<this->type<<endl;
		cout<<"price is = "<<this->price<<endl;
		cout<<"Size is = "<<this->size<<endl;
	}
	Shirt(){
		this->sid=0;
		strcpy(this->sname,"not given");
		strcpy(this->type,"not given");
		this->price=0.0;
		strcpy(this->size,"not given");	
		count++;	
	}
	Shirt(int id,char*name,char*type,double price,char*size){
		this->sid=id;
		strcpy(this->sname,name);
		strcpy(this->type,type);
		this->price=price;
		strcpy(this->size,size);
		count++;		
	}
	~Shirt(){
		cout<<"Destructer are call for = "<<this->sname;
		count--;
	}
	double finalprice(){
		int a = strcasecmp(this->size,"small");
		if(a==0){
			return this->price;
		}
		a = strcasecmp(this->size,"medium");
		 if(a==0){
			return this->price*(1+((dis_percent/100)*1));
		}
		a = strcasecmp(this->size,"large");
		if(a==0){
				return this->price*(1+((dis_percent/100)*2));
		}
		a = strcasecmp(this->size,"xlarge");
		if(a==0){
				return this->price*(1+((dis_percent/100)*3));
		}
		return this->price;
	}
	int static getcount(){
		return count;
	}
	void static set_dis_percent(double per){
		dis_percent=per;
	}
};
  double Shirt::dis_percent=10;
  int Shirt::count=0;
 int main(){
 	Shirt S(12,"g-style","wge",1000,"medium");
 	S.display();
 	cout<<"Final price is = "<<S.finalprice()<<endl;
 	cout<<"count is "<<Shirt::getcount()<<endl;
 }
