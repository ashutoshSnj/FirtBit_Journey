#include<iostream>
using namespace std;
class Product{
	int pid;
	char pname[20];
	double price;
	int quantity;
	static double discount;
	public:
		void display(){
			cout<<"Product id is = "<<this->pid<<endl;
			cout<<"Product name = "<<this->pname<<endl;
			cout<<"price is = "<<this->price<<endl;
			cout<<"Quantity = "<<this->quantity<<endl;
			cout<<"Final price is = "<<this->finalprice()<<endl;
					}
		Product(){
			this->pid=0;
			strcpy(this->pname,"not given");
			this->price=0;
			this->quantity=0;
		}
			Product(int id,char*name,double price,int quantity){
			this->pid=id;
			strcpy(this->pname,name);
			this->price=price;
			this->quantity=quantity;
		}
		double getprice(){
			return this->price;
		}
		double static getdiscount(){
			return discount;
		}
		double finalprice(){
			return this->price-(this->getprice()*(discount/100));
		}
		~Product(){
			cout<<"destructer call"<<endl;;
		}
		void static setdiscount(double dis){
			discount=dis;
		}
		
	
		
};
    double Product::discount=10.5;
    int main(){
    	cout<<Product::getdiscount()<<endl;
    	Product::setdiscount(11.2);
    	cout<<Product::getdiscount()<<endl;
    	Product P1(12,"SEgrfv",8654,5);
    	P1.finalprice();
    	P1.display();
    	Product*ptr[5];
    	ptr[0]=new Product();
    		ptr[1]=new Product(1,"SEgrfv",8654,5);
    	//	ptr[1]->display();
    	  delete ptr[0];
	}