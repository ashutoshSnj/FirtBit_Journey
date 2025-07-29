#include<stdio.h>
struct Trangle{
	float hight;
	float brith;
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
		Trangle(){
			this->hight=00;
			this->brith=00;
		}
		Trangle(float a, float b){
			this->hight=a;
			this->brith=b;
		}		
};
struct Rectangle{
	float length;
	float width;
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
		 Rectangle(){
			this->length=00;
			this->width=00;
		}
	    Rectangle(float a, float b){
			this->length=a;
			this->width=b;
		}		
};
struct Circle{
	float radius;
	void setradius(float a){
		this->radius=a;
	}
	   float getradius(){
		return this->radius;
	}
	Circle(){
		this->radius=0;
	}
	Circle(float a){
		this->radius=a;
	}
};
  struct Area{
  	void calculatarea(Trangle a){
  		
  		printf("\n Area of Trangle is = %f",(0.5)*(a.gethight()*(a.getbrith())));
  		}
  		void calculatarea(Rectangle a){
  		printf("\n Area of Rectangle is = %f",(a.getlength())*(a.getwidth()));
  		}
  	void calculatarea(Circle a){
  		printf("\n Area of Circle is = %f",(3.14)*((a.getradius())*(a.getradius())));
  		}
  };
  main(){
  	Area Cal_area;
  	Trangle A(2.5,6.3);
  	  Cal_area.calculatarea(A);
  	  Rectangle b(2.5,6.3);
  	  Cal_area.calculatarea(b);
  	  Circle c(4.2);
  	  Cal_area.calculatarea(c);
  }
 // Trangle A(2.5,6.3);
  // area of trangle  A = 1/2 × b × h.
  // area of rectangle length × width.
  // area of circle πr2