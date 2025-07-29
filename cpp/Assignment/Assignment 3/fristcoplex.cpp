using namespace std;
#include<iostream>
struct Complex{
	int real;
	int img;
	void display(){
		cout<<"\nreal+img = "<<this->real<<"+"<<this->img<<"i";
	}
	void setreal(int a){
		this->real=a;
			}
	void setimg(int a){
		this->img=a;
			}
		int getreal(){
				return this->real;
			}
		int getimg(){
		return this->img;
			}
			Complex(){
				this->real=0;
				this->img=0;
			}
			Complex(int a,int b){
				this->real=a;
				this->img=b;
			}
		Complex operator+(Complex a){
			Complex temp;
			temp.setreal(this->real+a.getreal());
			temp.setimg(this->img+a.getimg());
			return temp;
		}
		Complex operator+(int a){
				Complex temp;
			temp.setreal(this->real+a);
			temp.setimg(this->img+a);
			return temp;
		}
		Complex operator-(Complex a){
			Complex temp;
			temp.setreal(this->real-a.getreal());
			temp.setimg(this->img-a.getimg());
			return temp;
		}
		Complex operator-(int a){
				Complex temp;
			temp.setreal(this->real-a);
			temp.setimg(this->img-a);
			return temp;
		}
		Complex operator*(Complex a){
			Complex temp;
			temp.setreal(this->real*a.getreal());
			temp.setimg(this->img*a.getimg());
			return temp;
		}
		Complex operator*(int a){
				Complex temp;
			temp.setreal(this->real*a);
			temp.setimg(this->img*a);
			return temp;
		}
		Complex operator/(Complex a){
			Complex temp;
			temp.setreal(this->real/a.getreal());
			temp.setimg(this->img/a.getimg());
			return temp;
		}
		Complex operator/(int a){
				Complex temp;
			temp.setreal(this->real/a);
			temp.setimg(this->img/a);
			return temp;
		}
};
  Complex operator+(int b,Complex a ){
   	        Complex temp;
   	        temp.setreal(b+a.getreal());
   	        temp.setimg(b+a.getimg());
   	        return temp;
   }
   Complex operator-(int b,Complex a ){
   	        Complex temp;
   	        temp.setreal(b-a.getreal());
   	        temp.setimg(b-a.getimg());
   	        return temp;
   }
   Complex operator*(int b,Complex a ){
   	        Complex temp;
   	        temp.setreal(b*a.getreal());
   	        temp.setimg(b*a.getimg());
   	        return temp;
   }
   Complex operator/(int b,Complex a ){
   	        Complex temp;
   	        temp.setreal(b/a.getreal());
   	        temp.setimg(b/a.getimg());
   	        return temp;
   }
int main(){
	Complex c(45,55);
	Complex c2(5,3);
	Complex c3=35/c2;
	c.display();
	c2.display();
	c3.display();
	
}