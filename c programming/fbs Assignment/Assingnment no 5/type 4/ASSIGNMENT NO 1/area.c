#include<stdio.h>
int rec(int,int);
int cir(int);
void main(){
	
	int length=12;
     int width=21;
     int r=12;
   printf("this is perimeter of rectangle = %d",rec(length,width));
	printf("\nThis is perimeter of circle = %d",cir(r));

	
}
int rec(int length,int width)
{ 

int area=length*width;
int perimeter=2*(length+width);
  return  perimeter;
}

int  cir(int r){

 int rea=3.14*(r*r);

int pe=2*3.14*r;

    return pe;

}