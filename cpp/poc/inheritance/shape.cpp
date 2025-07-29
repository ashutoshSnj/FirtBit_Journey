using namespace std;
#include<iostream>
struct Shape{
	char colour[20];
	void display(){
       cout<<"Colour : "<<this->colour<<endl;
	}
	void setcolour(char* str){
		strcpy(this->colour,str);
	}
	char* getcolour(){
		return this->colour;
	}
	Shape(){
		strcpy(this->colour,"not given");
	}
	Shape(char*colour){
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
		Trangle(char*colour,float hight,float brith ):Shape(colour)
		{
			this->hight=hight;
			this->brith=brith;
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
		Rectangle(char*colour,float lenght,float width):Shape(colour){
			this->length=lenght;
			this->width=width;
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
		Circle(char*colour,float radius):Shape(colour){
		this->radius=radius;
	}

};
 int main(){
 	Trangle T;
 	Trangle T1("black",4.5f,6.3f);
 	T.display();
 	T1.display();
 	
 	
    Rectangle R;
    Rectangle R1("white",78.5f,5.3f);
    R.display();
    R1.display();
    
    Circle C;
    Circle C1("greay",4.5);
    C.display();
    C1.display();
    
}