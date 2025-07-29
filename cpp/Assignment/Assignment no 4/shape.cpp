using namespace std;
#include<iostream>
struct Shape{
	float area;
	char colour[20];
	 void display(){
		cout<<"Area :"<<this->area<<endl;
       cout<<"Colour : "<<this->colour<<endl;
    
	}
	 float cal_area(){
		return this->area;
	}
	void setarea(float a){
		this->area=a;
	}
	void setcolour(char* str){
		strcpy(this->colour,str);
	}
	float getarea(){
		return this->area;
	}
	char* getcolour(){
		return this->colour;
	}
	Shape(){
		this->area=0.0;
		strcpy(this->colour,"not given");
	}
	Shape(float a,char*colour){
		this->area=a;
		strcpy(this->colour,colour);
	}
};
struct Trangle:public Shape{
	float hight;
	float width;
	void display(){
		Shape::display();
		cout<<"Hight : "<<this->hight<<endl;
		cout<<"width : "<<this->width<<endl;
		
	}
	    void sethight(float a){
	    	this->hight=a;
	    }
	    	
		 void setwidth(float b){
	    	this->width=b;
		}
		float gethight(){
			return this->hight;
		}
		float getwidth(){
			return this->width;
		}
		Trangle():Shape()
		{
			this->hight=00;
			this->width=00;
		}
		Trangle(float area,char*colour,float hight,float width ):Shape(area,colour)
		{
			this->hight=hight;
			this->width=width;
		}
     float cal_area(){
		return this->area=0.5*(this->hight)*(this->width);
	}	
			
};
struct Rectangle:public Shape{
	float length;
	float width;
	void display(){
		Shape::display();
		cout<<"Length : "<<this->length<<endl;
		cout<<"Width : "<<this->width<<endl;
		
	}
	    void setlength(float a){
	    	this->length=a;
		}
		 void setwidth(float b){
	    	this->width=b;
		}
		float getlength(){
			return this->length;
		}
		float getwidth(){
			return this->width;
		}
		 Rectangle():Shape(){
			this->length=00;
			this->width=00;
		}
		Rectangle(float area,char*colour,float lenght,float width):Shape(area,colour){
			this->length=lenght;
			this->width=width;
		}
	   float cal_area(){
		this->area=(this->length)*(this->width);
	} 		
};
struct Circle:public Shape{
	float radius;
	void display(){
	  Shape::display();
		cout<<"radius : "<<this->radius<<endl;
	}
	void setradius(float a){
		this->radius=a;
	}
	   float getradius(){
		return this->radius;
	}
	Circle():Shape(){
		this->radius=0;
	}
		Circle(float area,char*colour,float radius):Shape(area,colour){
		this->radius=radius;
	}
	 float cal_area(){
		return this->area=(3.14*3.14)*this->radius;
	}

};
 int main(){
 	
 	Trangle T1(8.5f,"black",4.5f,6.3f);
  T1.display();
  cout<<"total area of trangle is = "<<T1.cal_area()<<endl;
 	

Rectangle R1(8.6f,"white",78.5f,5.3f);
 R1.display();
cout<<"total area of Rectangle is = "<<R1.cal_area()<<endl;
    

Circle C1(7.5f,"greay",4.5);
R1.display();
cout<<"total area of Circle is = "<<R1.cal_area()<<endl;

}