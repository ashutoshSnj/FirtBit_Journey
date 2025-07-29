#include <stdio.h>
/*
char main2(double,float);
void main(){
	double a=12;
	float s=12.2;
	 char chh=main2(a,s);
	 printf("%c",chh);
	//printf(main2());
	}
 char main2(double s,float w)
 {
 	return 'w';
 }*/
 #include <stdio.h>
 int myFunction(int,int);
 void main() {
int a=12;
int b=34;
int c= myFunction(a,b);
printf("%d",c);

}

// Create a function

int  myFunction(int a,int b) {
  int c=a+b;
  printf("I just got executed!\n");
  return 0;
  return a;
  
}

