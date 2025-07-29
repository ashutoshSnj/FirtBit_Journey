#include<iostream>
using namespace std;

struct Distance {
    int feet;
    int inch;

    // Constructor with parameters
    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }

    // Default constructor
    Distance() {
        this->feet = 0;
        this->inch = 0;
    }

    // Display function
    void display() {
        cout << "Distance = " << this->feet << " feet " << this->inch << " inches" << endl;
    }

    // Setter and getter for feet
    void setfeet(int f) {
        this->feet = f;
    }

    int getfeet() {
        return this->feet;
    }

    // Setter and getter for inch
    void setinch(int i) {
        this->inch = i;
    }

    int getinch() {
        return this->inch;
    }

    // Pre-increment operator
    Distance operator++() {
        Distance temp;
        temp.feet = ++this->feet;
        temp.inch = ++this->inch;
        return temp;
    }

    // Post-increment operator
    Distance operator++(int) {
        Distance temp;
        temp.feet=this->feet;
        temp.inch=this->inch;
        this->feet++;
        this->inch++;
        return temp;
    }

    // Pre-decrement operator
    Distance operator--() {
        Distance temp;
        temp.feet = --this->feet;
        temp.inch = --this->inch;
        return temp;
    }

    // Post-decrement operator
    Distance operator--(int) {
        Distance temp;
        temp.feet=this->feet;
        temp.inch=this->inch;
        this->feet--;
        this->inch--;
        return temp;
    }
};

int main() {
    Distance X(85, 45);
    X.display();

    Distance c = X--;
    c.display();
    X.display();

    Distance v(5, 10);
    v = ++v;
    v.display();

    return 0;
}
