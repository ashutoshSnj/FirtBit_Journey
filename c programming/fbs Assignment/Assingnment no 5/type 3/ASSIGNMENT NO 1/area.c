#include<stdio.h>
void rec(int,int);
void cir(int);
void main(){
	
	int length=12;
     int width=21;
     int r=12;
	rec(length,width);
	cir(r);
	//printf("this is perimeter of rectangle = %d\n this is perimeter of circle = %d",a,b);
	
}
void rec(int length,int width)
{ 
// this is for rectangular


int area=length*width;
int perimeter=2*(length+width);

printf("\n this is a area and perimeter of rectangle %d & %d ",area,perimeter);
}

void cir(int r){




//this is for circle
 
 int rea=3.14*(r*r);

int pe=2*3.14*r;

printf("\n this is a area and perimeter of circle %d & %d",rea,pe);

}