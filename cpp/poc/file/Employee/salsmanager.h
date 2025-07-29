
#include "employe.h"
class Salsemanager:public Employee{
 double incentive;
	int target;
	public:
	void setincentive(double );
	void settarget(int );
		double getincentive();
		int gettarget();
		Salsemanager();
		Salsemanager(int ,char*,double ,double ,int);
			void display();
			double cal_salary();
};
