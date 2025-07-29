#include<stdio.h>
int main1(int,int);
int main2(int);
void main(){
	int length=12;
int width=21;
 int r=12;
	
	int a=main1(length,width);
	int b=main2(r);
	 
	printf("this is perimeter of rectangle = %d\n this is perimeter of circle = %d",a,b);
	
}
int  main1(int length,int width)
{ 
// this is for rectangular


int area=length*width;
int perimeter=2*(length+width);
return perimeter;
//printf("\n this is a area and perimeter of rectangle %d & %d ",area,perimeter);
}

int main2(int r){




//this is for circle

 int rea=3.14*(r*r);

int pe=2*3.14*r;
return pe;

//printf("\n this is a area and perimeter of circle %d & %d",rea,pe);

}