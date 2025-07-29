using namespace std;
#include<iostream>
class vehical{
    double toll;
	int no_of_person;
	public:
	vehical(){
		this->toll=0;
		this->no_of_person=0;
	}
	vehical(double toll,int no){
		this->toll=toll;
		this->no_of_person=no;
	}
	void settoll(double toll){
		this->toll=toll;
	}
	void setperson(int person){
		this->no_of_person=person;
	}
	double gettoll(){
		return this->toll;
	}
	int getperson(){
		return this->no_of_person;
	}
	int virtual caltoll()=0;	//
};
class twowheeler:public vehical{
	public:
	int caltoll(){	
		int totalperson=0;
		if(this->getperson()>=2){
			totalperson=this->getperson()-2;
		}
		int a=this->gettoll()+(totalperson*10);
		return a;
	}
	twowheeler():vehical(){
	}
	twowheeler(double toll,int person):vehical(toll,person){
	}
	
	
	
};
class threewheeler:public vehical{
	public:
		threewheeler():vehical(){
		}
	threewheeler(double toll,int person):vehical(toll,person){
	}
	
	int caltoll(){	
		int totalperson=0;
		if(this->getperson()>=3){
			totalperson=this->getperson()-3;
		}
		int a=this->gettoll()+(totalperson*20);
		return a;
	}
};
class fourwheeler:public vehical{
	public:
		fourwheeler():vehical(){
		}
	fourwheeler(double toll,int person):vehical(toll,person){
	}
	
	int caltoll(){	
		int totalperson=0;
		if(this->getperson()>=4){
			totalperson=this->getperson()-4;
		}
		int a=this->gettoll()+(totalperson*30);
		return a;
	}
};
class heavywheeler:public vehical{
	public:
    	heavywheeler():vehical(){
		}
	heavywheeler(double toll,int person):vehical(toll,person){
	}
	
	int caltoll(){	
		int totalperson=0;
		if(this->getperson()>=6){
			totalperson=this->getperson()-6;
		}
		int a=this->gettoll()+(totalperson*100);
		return a;
	}
};
int main(){
	int no;
	double toll;
	int person;
	vehical*ptr;
	
  do{
  	cout<<"Enter the type of vehical \n 1) two wheller \n 2) three wheler \n 3) 4 wheller \n  4) heavy \n 5) exit\n";
  	cin>>no;
  	
        if (no >= 1 && no <= 4) {
            cout << "\n Enter the number of persons: ";
            cin >> person;
            cout << "\n Enter the basic toll: ";
            cin >> toll;
        }
    
 
  switch(no){
  case 1:
  	ptr=new twowheeler (toll,person);
  	cout<<"tottal tol is = "<<ptr->caltoll();
  	break;
  
    case 2 :
  	ptr=new threewheeler (toll,person);
  	cout<<"tottal tol is = "<<ptr->caltoll();
  break;
  
   case 3 :
  	ptr=new fourwheeler (toll,person);
  	cout<<"tottal tol is = "<<ptr->caltoll();
  	break;
  case 4:
  	ptr=new heavywheeler (toll,person);
  	cout<<"tottal tol is = "<<ptr->caltoll();
  	break;
  	case 5:
  	cout<<"Exit ...";
}
}
while (no!=5);
	
}