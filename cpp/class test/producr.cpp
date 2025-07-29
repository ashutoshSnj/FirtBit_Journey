#include<iostream>
using namespace std;
class Product{
	int id;
	char product_name[20];
	double price;
	int quantity;
	public:
	/*Product(){
		this->id=0;
		strcpy(this->Product_name,"not given");
		this->price=0.0;
		this->quantity=0;
	}*/
	Product(int id,char*name,double price,int q){
		this->id=id;
		strcpy(this->product_name,name);
		this->price=price;
		this->quantity=q;	
	}
	void setid(int id){
		this->id=id;
	}
	void setname(char*name){
		strcpy(this->product_name,name);
	}
	void setprice(double a){
		this->price=a;
	}
	void setquantity(int a){
		this->quantity=a;
	}
	int getid(){
		return this->id;
	}
	char* getname(){
		return this->product_name;
	}
	double getprice(){
		return this->price;
	}
	int  getquantity(){
		return this->quantity;
	}
	virtual void display(){
		cout<<"id is = "<<this->id<<endl;	
		cout<<"name is "<<this->product_name<<endl;
		cout<<"price is = "<<this->price<<endl;
		cout<<"quantity = "<<this->quantity<<endl;
	}
	 virtual double  cal_dis()=0;

};
class Electronics:public Product{
	int warranty;
	char barand[20];
	public:
	void display(){
		Product::display();
		cout<<"Warranty perieod is = "<<this->barand<<endl;
		cout<<"brand = "<<this->barand<<endl;
	}
	Electronics(int id,char*name,double price,int q,int war,char*brand):Product(id,name,price,q){
		this->warranty=war;
		strcpy(this->barand,brand);
	}
	double cal_dis(){
		return this->getprice()-((this->getprice()/100)*10);
	}
	
};
class Clothing:public Product{
	int size;
	char material[20];
	public:
	Clothing(int id,char*name,double price,int q,int size,char*m):Product(id,name,price,q){
		this->size=size;
		strcpy(this->material,m);
	}
	void display(){
		Product::display();
		cout<<"size is = "<<this->size<<endl;
		cout<<"material ia "<<this->material<<endl;
	}
	double cal_dis(){
		return this->getprice()-((this->getprice()/100)*20);
	}
};
class Grocery:public Product{
	char exper_date[20];
	double weight;
		void display(){
		Product::display();
		cout<<"Expiration date  = "<<this->exper_date<<endl;
		cout<<"Weight  "<<this->weight<<endl;
	}
	Grocery(int id,char*name,double price,int q,char*date,double w):Product(id,name,price,q){
		strcpy(this->exper_date,date);
		this->weight=w;
	}
		double cal_dis(){
		return this->getprice()-((this->getprice()/100)*5);
	}
};
int main(){
Product *ptr[10];

}