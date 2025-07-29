  #include<stdio.h>
  struct Calculater {
  int add(int a,int b){
  	  printf("\n%d",a+b);
  		return a+b;
	  }
	float add(int a,float b){
		printf("\n%f",a+b);
		return a+b;
	}
	   void  add(float a,int b){
		printf("\n%f",a+b);
		
	}
	    float  add(float a,float b){
		printf("\n%f",a+b);
		return a+b;
	}
	  
};
main(){
	  Calculater A;
	  int a,b;
	  float c,d;
	    a=45;
	    b=45;
	    A.add(a,b);
	    c=4.5;
	    d=5.3;
	     A.add(c,d);
	     a=5;
	     c=4.5;
	     A.add(a,c);
	     c=4.3;
	     a=89;
	     A.add(c,a);
	     
	     
	     
}
