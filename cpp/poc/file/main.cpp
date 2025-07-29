using namespace std;
   #include<iostream>
   #include"header.h"
  // #include"Complex.cpp"
int main() {
     Complex C1;
     C1.setreal(100);
     C1.setimaginary(9);
     C1.display();
     Complex C2(15,85);
     C2.display();
     Complex C3;
     C3=C1.add(C2);
     // C2 pass by value C2 is a variabal of Complex datatype 
   C3.display();
     Complex C4;
     C4=C2.add(23);
     C4.display();
     C3=C1.sub(5);
     C3.display();
    C4=C2.mul(C1);
     C4.display();
     C4=C2.mul(5);
     C4.display();
     C4=C1.div(C2);
     C4.display();
     C4=C2.div(5);
     C4.display();
    
}
