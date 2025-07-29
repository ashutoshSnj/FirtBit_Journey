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
			 Complex operator&&(Complex a) {
        Complex temp; 
        if ((this->real!=0||this->img != 0) && (a.getreal()!=0||a.getimg()!= 0)) {
            temp.setreal(1);
            temp.setimg(1);
        } else {
            temp.setreal(0);
            temp.setimg(0);
        }
        return temp;
    }
    Complex operator||(Complex c){
        Complex temp; 
        if (this->real!=0||this->img!=0||c.getreal()!=0||c.getimg()!= 0) {
            temp.setreal(1);
            temp.setimg(1);
        } else {
		
            temp.setreal(0);
            temp.setimg(0);
        }
        return temp;
    }
			 Complex operator!() {
        Complex temp;  
        if (this->real==0&&img==0) {
            temp.setreal(1);
            temp.setimg(1);
        } else {
            temp.setreal(0);
            temp.setimg(0);
        }
        return temp;
    }
			
};
int main(){

    Complex c1(0, 0);
    Complex c2(3, 4);
    Complex c3(0, 0);
    Complex c4 = !c1;
    c4.display();

    
    Complex c5 = c1 && c2;
    c5.display();

    Complex c6 = c1 || c3;
     c6.display();
}