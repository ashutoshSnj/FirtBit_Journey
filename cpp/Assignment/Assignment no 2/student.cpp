#include<stdio.h>
struct Loan{
	
	void approveloan(float a){
	
		if(a>=80){
			printf("\nYou are eligible for a loan of up to = 2 lakh");
	}
	     else if(a>=60&&a<80){
		 
	     	printf("\nYou are eligible for a loan of up to = 1 lakh");
		 }
		 else if(a>=40&&a<60){
		   printf("\nYou are eligible for a loan of up to = 50k");
		 }
		 else{
		 	printf("\nno loan aprroved");
		 }
}
     void approveloan(double a){
    
     	if(a>=1200000){
     		printf("\nYou are eligible for a loan of up to = 7 lakh");
		 }
		 else if (a>=1000000&&a<1200000){
		 	printf("\nYou are eligible for a loan of up to = 6 lakh");
		 }
		 else if(a>=600000&&a<1000000){
		 	printf("\nYou are eligible for a loan of up to = 5 lakh");
		 }
		 else if(a>=400000&&a<600000){
		 	printf("\nYou are eligible for a loan of up to = 4 lakh");
		 }
		 else{
		 	printf("\n no loan approved");
		 }
	 }
};
main(){
	int choice;
	printf("\n if you are student press (1) \n you are a employee press (2) = ");
	scanf("%d",&choice);
	if(choice==1){
		printf("\n Enter the marks in % = ");
		float a;
		scanf("%f",&a);
		Loan x;
		x.approveloan(a);
	}
	else if(choice==2){
		printf("\n Enter your Salary is Lpa = ");
		double a;
		scanf("%lf",&a);
		Loan y;
		y.approveloan(a);
	}
}