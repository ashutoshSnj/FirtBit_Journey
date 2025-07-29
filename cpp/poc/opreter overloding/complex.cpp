#include <stdio.h>

struct Complex {
    int real;
    int imaginary;
    void display(){
    printf("\nReal+Imaginary =%d+%di",this->real,this->imaginary);
   
	}
	void setreal(int a){
		this->real=a;
	}
		void setimaginary(int a){
		this->imaginary=a;
	}
	int getimaginary(){
		return this->imaginary;
	}
	int getreal(){
		return this->real;
	}
	Complex(){
		this->real=0;
		this->imaginary=0;
	}
	Complex(int a,int b){
		this->real=a;
		this->imaginary=b;
	}
	  Complex operator+(Complex ash){
	  	   Complex temp ;
	  	   temp.real=this->real+ash.real;
	  	   temp.imaginary=this->imaginary+ash.imaginary;
	  	   return temp;
	  }
	Complex operator+(int a){
	  	Complex temp;
	  	temp.real=this->real+a;
	  	temp.imaginary=this->imaginary+a;
	  	return temp;
	  }
	  Complex operator-(Complex str){
	  	Complex temp;
	  	temp.real=this->real-str.real;
	  	temp.imaginary=this->imaginary-str.imaginary;
	  	return temp;
	  }
	  Complex operator-(int a){
	  	Complex temp;
	  	temp.real=this->real-a;
	  	temp.imaginary=this->imaginary-a;
	  	return temp;
	  }
	  Complex operator*(Complex str){
	  	Complex temp;
	  	temp.real=(this->real)*(str.real);
	  	temp.imaginary=(this->imaginary)*(str.imaginary);
	  	return temp;
	  }
	  Complex operator*(int a){
	  	Complex temp;
	  	temp.real=this->real*a;
	  	temp.imaginary=this->imaginary*a;
	  	return temp;
	  }
	   Complex operator/(Complex str){
	  	Complex temp;
	  	temp.real=(this->real)/(str.real);
	  	temp.imaginary=(this->imaginary)/(str.imaginary);
	  	return temp;
	  }
	  Complex operator/(int a){
	  	Complex temp;
	  	temp.real=this->real/a;
	  	temp.imaginary=this->imaginary/a;
	  	return temp;
	  }
	 int  operator>(Complex a){
	  	     if(this->real>a.real){
	  	     	return 1;
			   }
			   else{
			   	return 0;
			   }
	  }
	 int  operator==(Complex a){
	  	if(this->real==a.real&&this->imaginary==a.imaginary){
	  		return 1;
		  }
		  else {
		  	return 0;
		  }
	  }
	void operator++(){
	  	     this->real=this->real+1;
	  	     this->imaginary=this->imaginary+1;	  
			
	  }
	   Complex operator++(int){
	  	       Complex temp;
	  	        temp.real=this->real;
	  	       temp.imaginary=this->imaginary;
	  	     this->real=this->real+1;
	  	     this->imaginary=this->imaginary+1;
	  	     return temp;
	  }
	  	void operator--(){
	  	     this->real=this->real-1;
	  	     this->imaginary=this->imaginary-1;	  
			
	  }
	   Complex operator--(int){
	  	       Complex temp;
	  	        temp.real=this->real;
	  	       temp.imaginary=this->imaginary;
	  	     this->real=this->real-1;
	  	     this->imaginary=this->imaginary-1;
	  	     return temp;
	  }
	  
}; 
    Complex operator+(int a,Complex b){
    
    	  Complex temp;
    	  temp.real=a+b.real;
    	  temp.imaginary=a+b.imaginary;
    	  return temp;
	}
	Complex operator-(int a,Complex b){
    	  Complex temp;
    	  temp.real=a-b.real;
    	  temp.imaginary=a-b.imaginary;
    	  return temp;
	}
	Complex operator*(int a,Complex b){
    	  Complex temp;
    	  temp.real=a*b.real;
    	  temp.imaginary=a*b.imaginary;
    	  return temp;
	}
	Complex operator/(int a,Complex b){

    	  Complex temp;
    	  temp.real=a/b.real;
    	  temp.imaginary=a/b.imaginary;
    	  return temp;
	}
int main() {
     Complex C1;
     C1.setreal(100);
     C1.setimaginary(9);
    // C1.display();
     Complex C2(15,85);
     //C2.display();
     Complex C3;
     C3=C1+C2;
   //C3.display();
     Complex C4;
     C4=C2+23;
     //C4.display();
     
     C3=C1-5;
    // C3.display();
    C3=C1-C2;
  //  C3.display();
    C4=C2*C1;
   
     //C4.display();
     C4=C2*5;
     //C4.display();
     C4=C1/C2;
  //   C4.display();
     C4=C1/5;
     
     //C4.display();
      C4=5+C1;
      C3.display();
      C4.display();
     Complex a(25,55);
    // Complex a1=5+a;
     //Complex a1=oprater+(12,a);
   //  a1.display();
    if(C3>C4){
    	//C4.opreter>(C3);
    	printf("\nC3 is greter ");
	}
	else{
		printf("\nC4 is greter");
	}
	Complex X1(12,63);
	Complex X2(12,63);
	if(X1==X2){
		printf("\n both no are equal");
	}
	else{
		printf("\n no not equal");
	}
	Complex X3(1,2);
	++X3;
	X3.display();
	X3++;
	X3.display();
}
