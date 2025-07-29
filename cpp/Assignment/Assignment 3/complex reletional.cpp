 
using namespace std;
#include<iostream>
struct Complex {
    int real;
    int img;

    void display() {
        cout<<"\nreal = "<<this->real;
        cout<<"\nimg = "<<this->img;  
    }

    void setreal(int r) {
        this->real=r;
    }

    void setimg(int i) {
        this->img=i;
    }

    int getreal() {
        return this->real;
    }

    int getimg() {
        return this->img;
    }

    Complex() {
        this->real=0;
        this->img=0;
    }

    Complex(int r, int i) {
        this->real=r;
        this->img=i;
    }

    
    Complex operator==(Complex c) {
        Complex temp;
        if (this->real == c.getreal() && this->img == c.getimg()) {
            temp.setreal(1);
            temp.setimg(1);
        } else {
            temp.setreal(0);
            temp.setimg(0);
        }
        return temp;
    }
    Complex operator!=(Complex c) {
        Complex temp;
        if (this->real != c.getreal()||this->img != c.getimg()) {
            temp.setreal(1);
            temp.setimg(1);
        } else {
            temp.setreal(0);
            temp.setimg(0);
        }
        return temp;
    }


    Complex operator<(Complex c) {
        Complex temp;
        double mag1 = this->real * this->real + this->img * this->img;
        double mag2 = c.real * c.real + c.img * c.img;
        if (mag1 < mag2) {
            temp.setreal(1);
            temp.setimg(1);
        } else {
            temp.setreal(0);
            temp.setimg(0);
        }
        return temp;
    }

    Complex operator>(Complex c) {
        Complex temp;
        double mag1 = this->real * this->real + this->img * this->img;
        double mag2 = c.real * c.real + c.img * c.img;
        if (mag1 > mag2) {
            temp.setreal(1);
            temp.setimg(1);
        } else {
            temp.setreal(0);
            temp.setimg(0);
        }
        return temp;
    }


    Complex operator<=(Complex& other) {
        Complex temp;
        if ((*this < other).getreal() == 1) {
            temp.setreal(1);
            temp.setimg(1);
        } else {
            temp.setreal(0);
            temp.setimg(0);
        }
        return temp;
    }


    Complex operator>=(Complex& other) {
        Complex temp;
        if ((*this > other).getreal() == 1) {
            temp.setreal(1);
            temp.setimg(1);
        } else {
            temp.setreal(0);
            temp.setimg(0);
        }
        return temp;
    }
};

int main() {
    Complex a(3, 4); 
    Complex b(3, 4);  
    Complex c(5, 12); 

    Complex result;

    result = a == b;
    cout << "\nResult of a == b: ";
    result.display();


    result = a != c;
    cout << "\nResult of a != c: ";
    result.display();

    
    result = a < c;
    cout << "\nResult of a < c: ";
    result.display();

    
    result = c > a;
    cout << "\nResult of c > a: ";
    result.display();

    result = a <= b;
    cout << "\nResult of a <= b: ";
    result.display();


    result = c >= a;
    cout << "\nResult of c >= a: ";
    result.display();

}
