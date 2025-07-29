
//#include"employe.h"
class Admin:public Employee{
	double allowance;
	public:
	void setallowance(double );
	double getallowance();
	Admin();
	Admin(int,char*,double ,double);
	void display();
	double cal_salary();
};
