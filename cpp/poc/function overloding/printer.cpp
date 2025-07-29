#include<stdio.h>
struct Printer{
       void print(const char*chr){
       	printf("\n%s",chr);
	   }
	    void print(int a){
	   	printf("\n%d",a);
	}
	 void print(float a){
	   	printf("\n%f",a);
	}
	   void print(){
	   	printf("\nhello");
	   }
	   void print(char ch){
	   	printf("\n%c",ch);
	   }
};
main(){
       Printer p1;
       p1.print();
       p1.print("ashutosh");
       p1.print(7.8f);
       p1.print('g');
}