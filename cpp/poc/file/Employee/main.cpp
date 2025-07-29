


#include"employe.h"
#include"salsmanager.h"
#include"Hr.h"
#include"admin.h"
int main(){
Employee*ep;
Employee e1(11,"Ashutosh",200000);
ep=&e1;
ep->display();

Salsemanager S(12,"virat",52635,45236,58);
ep=&S;
 ep->display();
 cout<<"total salary of Salsemanager is = "<<ep->cal_salary()<<endl;


Admin A(13,"sachin",42563,52365);
ep=&A;
ep->display();
cout<<"total salary of admin is = "<<ep->cal_salary()<<endl;
 
 Hr H(14,"virat",1256,5236);
 ep=&H;
 ep->display();
 cout<<"total salary of Hr is = "<<ep->cal_salary()<<endl;
 
}