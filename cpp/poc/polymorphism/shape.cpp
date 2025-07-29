using namespace std;
#include<iostream>
struct Shape{
	float area;
	char colour[20];
	virtual void display(){
		cout<<"Area :"<<this->area<<endl;
       cout<<"Colour : "<<this->colour<<endl;
    
	}
	virtual float cal_area(){
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
	float brith;
	void display(){
		Shape::display();
		cout<<"Hight : "<<this->hight<<endl;
		cout<<"brith : "<<this->brith<<endl;
		
	}
	    void sethight(float a){
	    	this->hight=a;
	    }
	    	
		 void setbrith(float b){
	    	this->brith=b;
		}
		float gethight(){
			return this->hight;
		}
		float getbrith(){
			return this->brith;
		}
		Trangle():Shape()
		{
			this->hight=00;
			this->brith=00;
		}
		Trangle(float area,char*colour,float hight,float brith ):Shape(area,colour)
		{
			this->hight=hight;
			this->brith=brith;
		}
	 float cal_area(){
		return this->area=0.5*(this->hight)*(this->brith);
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
	return	this->area=(this->length)*(this->width);
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
    Shape *ptr;
 	Trangle T1(8.5f,"black",4.5f,6.3f);
  ptr=&T1;
  ptr->display();
  cout<<"total area of trangle is = "<<ptr->cal_area()<<endl;
 	

    Rectangle R1(8.6f,"white",78.5f,5.3f);
    ptr=&R1;
  ptr->display();
  cout<<"total area of Rectangle is = "<<ptr->cal_area()<<endl;
    

    Circle C1(7.5f,"greay",4.5);
    ptr=&C1;
  ptr->display();
  cout<<"total area of Circle is = "<<ptr->cal_area()<<endl;

}