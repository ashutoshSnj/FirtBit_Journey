

#include"employe.h"
class Hr:public Employee{
	double  commission;
	public:
 void setcommission(double);
 double getcommission();
 Hr();
 Hr(int ,char* ,double ,double);
 void display();
 double cal_salary();
};
