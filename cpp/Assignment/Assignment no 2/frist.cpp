#include<stdio.h>

struct Calculater{
 	void add(int a,int b){
		printf("\nAddition is = %d",a+b);
		}
		void add(float a,float b){
		printf("\nAddition is = %f",a+b);
		}
		void add(int a,float b){
		printf("\nAddition is = %f",a+b);
		}
		void add(float a,int b){
		printf("\nAddition is = %f",a+b);
		}
	void sub(int a,int b){
		printf("\nSubstraction is = %d",a-b);
	}
	void sub(float a,float b){
		printf("\nSubstraction is = %f",a-b);
	}
	void sub(int a,float b){
		printf("\nSubstraction is = %f",a-b);
	}
	void sub(float a,int b){
		printf("\nSubstraction is = %f",a-b);
	}
	void mul(int a,int b){
		printf("\nMultiplication is = %d",a*b);
	}
	void mul(float a,int b){
		printf("\nMultiplication is = %f",a*b);
	}
	void mul(float a,float b){
		printf("\nMultiplication is = %f",a*b);
	}
	void mul(int a,float b){
		printf("\nMultiplication is = %f",a*b);
	}
	void div(int a,int b){
		printf("\n Division is = %d",a/b);
	}
	void div(int a,float b){
		printf("\n Division is = %f",a/b);
	}
	void div(float a,float b){
		printf("\n Division is = %f",a/b);
	}
	void div(float a,int b){
		printf("\n Division is = %f",a/b);
	}
		
};
main(){
        Calculater s;
        s.add(45,48);
        s.add(5.7f,4.5f);
        s.add(23,3.4f);
        s.add(2.8f,78);
        /////////////////////////////
        s.mul(45,48);
        s.mul(5.7f,4.5f);
        s.mul(23,3.4f);
        s.mul(2.8f,78);
        /////////////////////////
        s.sub(456,48);
        s.sub(57.5f,4.5f);
        s.sub(23,3.4f);
        s.sub(28.34f,2);
        ////////////////////////
        s.div(16,2);
        s.div(5.7f,4.5f);
        s.div(23,3.4f);
        s.div(2.8f,78);
        
        
        
        
			
}