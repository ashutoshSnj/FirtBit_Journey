#include<stdio.h>
#include<string.h>
struct Vehicles{
	int model_no;
	char model_name[20];
	int price;
	void display(Vehicles*ptr,Vehicles str){
		printf("\nModel no is = %d",this->model_no);
		printf("\nModel name is = %s",this->model_name);
		printf("\nModel price is = %d",this->price);
		model_no=ptr->model_no;
		printf("\n str name is= %s",str.model_name);
		printf("\nmodel no is %d",this->model_no);
	}
};
 main(){
	Vehicles v,v1,v3;
		strcpy (v3.model_name,"xv");
	v.model_no=123;
	strcpy (v.model_name,"xuv");
	v.price=2000000;
	v1.model_no=78;
	v.display(&v1,v3);
}