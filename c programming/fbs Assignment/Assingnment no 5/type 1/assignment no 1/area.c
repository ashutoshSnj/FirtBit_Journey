#include<stdio.h>
void main(){
	rect();
	circle();
	
}
void rect()
{ 
// this is for rectangular

int length=12;
int width=21;
int area=length*width;
int perimeter=2*(length+width);
printf("\n this is a area and perimeter of rectangle %d & %d ",area,perimeter);

}

//this is for circle

	void circle() {
	
 int r=12;
 int rea=3.14*(r*r);

int pe=2*3.14*r;

printf("\n this is a area and perimeter of circle %d & %d",rea,pe);

}