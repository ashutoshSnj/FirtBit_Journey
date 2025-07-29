using namespace std;
#include<iostream>
struct Distance {
    int feet;
    int inch;

    void display() {
        cout<<"\nfeet = "<<this->feet;
		 cout<<"\n inch = " <<this->inch;
    }

    void setfeet(int f) {
        this->feet=f;
    }

    void setinch(int i) {
        this->inch=i;
    }

    int getfeet() {
        return this->feet;
    }

    int getinch() {
        return this->inch;
    }

    Distance() {
        this->feet=0;
        this->inch=0;
    }

    Distance(int f, int i) {
        this->feet=f;
        this->inch=i;
    }

    Distance operator&&(Distance d) {
        Distance temp; 
        if ((this->feet!=0||this->inch!=0)&&(d.getfeet()!=0||d.getinch()!=0)) {
            temp.setfeet(1);
            temp.setinch(1);
        } else {
            temp.setfeet(0);
            temp.setinch(0);
        }
        return temp;
    }

    Distance operator||(Distance d) {
        Distance temp; 
        if (this->feet!=0||this->inch!=0||d.getfeet()!=0||d.getinch()!=0) {
           temp.setfeet(1);
            temp.setinch(1);
        } else {
            temp.setfeet(0);
            temp.setinch(0);
        }
        return temp;
    }

    Distance operator!() {
        Distance temp;  
        if (this->feet==0&&this->inch==0) {
            temp.setfeet(1);
            temp.setinch(1);
        } else {
            temp.setfeet(0);
            temp.setinch(0);
        }
        return temp;
    }
};

int main() {
    Distance a(5, 8);
    Distance b(6, 3);
    Distance c = a && b;
    c.display();

    
}
