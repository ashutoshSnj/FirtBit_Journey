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
    Complex resultNot = !c1;
    cout << "Result of !c1: ";
    resultNot.display();

    
}