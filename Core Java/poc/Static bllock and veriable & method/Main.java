class Parent {
    static void display() {
        System.out.println("Static method in Parent class");
    }
}

class Child extends Parent {
    static void display() { // This hides the Parent's static method
        System.out.println("Static method in Child class");
    }
}

public class Main {
    public static void main(String[] args) {
        Parent.display(); // Calls Parent's static method
        Child.display();  // Calls Child's static method

        // Using Parent reference
        Parent obj = new Child();
        obj.display(); // Still calls Parent's static method, no polymorphism here
    }
}
// static methid we can not override if write it in derive class then it hide the base class method 
// if we call it using base class refrence then object ki method call nahi hogi ref ki hogi