using namespace std;
#include<iostream>
class Libraryitem{
	char title[30];
	char author[30];
	int  publication_year;
	int itemid;
	public:
		
	Libraryitem(){
		strcpy(this->title,"not given");
		strcpy(this->author,"not given");
		this->publication_year=0;
		this->itemid=0;
	}
	Libraryitem(char*title,char*author,int year,int itemid){
		strcpy(this->title,title);
		strcpy(this->author,author);
		this->publication_year=year;
		this->itemid=itemid;
	}
	void settitle(char*title){
    	strcpy(this->title,title);
	}
	void setauthor(char*author){
		strcpy(this->author,author);
	}
	void setyear(int year){
		this->publication_year=year;
	}
	void setitemid(int id){
		this->itemid=id;
	}
	char* gettitle(){
		return this->title;
	}
	char* getauthor(){
		return this->author;
	}
	int getyear(){
		return this->publication_year;
	}
	int getitemid(){
		return this->itemid;
	}
	virtual void display(){
	cout<<"Title is = "<<this->title<<endl;
	cout<<"Author is = "<<this->author<<endl;
   	cout<<"publication year = "<<this->publication_year<<endl;
   	cout<<"Item id = "<<this->itemid<<endl;
	}
	virtual void Assign_days()= 0;
};// Libraryitem end here
class Book:public Libraryitem{
	int isbn;
	int no_of_pages;
	public:
		void display(){
		 Libraryitem::display();
		cout<<"ISBN is = "<<this->isbn<<endl;
		cout<<"no of pages = "<<this->no_of_pages<<endl;
		}
		Book():Libraryitem(){
		  this->isbn=0;
		  this->no_of_pages=0;
		}
		
		Book(char*tit,char*aut,int yer,int id,int isbn,int pages):Libraryitem(tit,aut,yer,id){
		  this->isbn=isbn;
		  this->no_of_pages=pages;
		}
		void Assign_days() {
     cout << "Books can be assigned for 15 days." << endl;
        }

		void setisbn(int isbn){
			this->isbn=isbn;
		}
		void setno_pages(int pages){
			this->no_of_pages=pages;
		}
		int getisbn(){
			return this->isbn;
		}
		int getno_pages(){
			return this->no_of_pages;
		}
	
}; //book end here
class Magazine:public Libraryitem{
	int issue_num;
	int volume_no;
	public:
	void display(){
         Libraryitem::display();
		    cout<<"Issue no = "<<this->issue_num<<endl;
		    cout<<"volume no = "<<this->volume_no<<endl;
	}
	Magazine():Libraryitem(){
		this->issue_num=0;
		this->volume_no=0;
	}
	Magazine(char*tit,char*aut,int yer,int id,int issuno,int vol ):Libraryitem(tit,aut,yer,id){
		this->issue_num=issuno;
		this->volume_no=vol;
	}
	void Assign_days(){
    cout << "Magazines can be assigned for 5 days." << endl;
   }

	void setissue_no(int no){
		this->issue_num=no;
	}
	void setvolume_no(int no){
		this->volume_no=no;
	}
	int getissue_no(){
		return this->issue_num;
	}
	int getvolume_no(){
		return this->volume_no;
	}
	
}; //Magazine end here
class Dvd:public Libraryitem{
	double duration;
	double rating;
	public:
	void display(){
		 Libraryitem::display();
			cout<<" Duration is = "<<this->duration<<endl;
        	cout<<"Rating is "<<this->rating<<endl;
	}
	Dvd():Libraryitem(){
		this->duration=0.0;
		this->rating=0.0;
	}
		Dvd(char*tit,char*aut,int yer,int id,double dur,double rat):Libraryitem(tit,aut,yer,id){
		this->duration=dur;
		this->rating=rat;
	}
	void Assign_days(){
    cout << "DVDs can be assigned for 3 days." << endl;
    }

	void setduration(double duration){
		this->duration=duration;
	}
	void setrating(double rating){
		this->rating=rating;
	}
	double getduration(){
		return this->duration;
	}
	double getrating(){
		return this->rating;
	}
};//Dvd end here
int main(){
	Libraryitem *ptr[20];
	int choice;
	char title[30];
	char author[30];
	int  publication_year,itemid,isbn,no_of_pages,issue_no,volume_no,no,count=0;
    double duration, rating;
	do{
	cout<<"1)Add a item"<<endl;
	cout<<"2)Display the item "<<endl;
	cout<<"3)Remove the item "<<endl;
	cout<<"4)Exit"<<endl;
	cout<<"Enter the Choice =  ";
	cin>>choice;
	
	if(choice==1){
			cout<<"1) Add Book \n 2) Add Magazin \n 3) Add dvd ";
			cout <<"\n Enter your choice = ";
			cin>>no;
			cout<<"Enter the Title = ";
			cin>>title;
			cout<<"Enter the Auther = ";
			cin>>author;
			cout<<"Enter the publication year = ";
			cin>>publication_year;
			cout<<"Enter itemid = ";
			cin>>itemid;
			if(no==1){
				cout<<"Enter the isbn = ";
				cin>>isbn;
				cout<<"Enter the no of pages = ";
				cin>>no_of_pages;
				ptr[count++]=new Book(title,author,publication_year,itemid,isbn,no_of_pages);
			}
			else if(no==2){
				cout<<"Enter the issue no = ";
				cin>>issue_no;
				cout<<"Enter the volume no = ";
				cin>>volume_no;
				ptr[count++]=new Magazine(title,author,publication_year,itemid,issue_no,volume_no);	
			}
			else if(no==3){
				cout<<"Enter the Duration = ";
				cin>>duration;
				cout<<"Enter the rating = ";
				cin>>rating;
				ptr[count++]=new Dvd(title,author,publication_year,itemid,duration,rating);
			}
     	}
     	else if(choice==2){
     		for(int i=0;i<count;i++){
     			cout<<"\n===================\n";
     			ptr[i]->display();
     			ptr[i]->Assign_days();
     			cout<<"\n================\n";
			 }
		 }
		 else if(choice==3){
		 	int id;
		 	cout<<"Enter the id of that item = ";
		 	cin>>id;
		 	for(int i=0;i<count;i++){
		 		if(ptr[i]->getitemid()==id){
		 			for(int j=i+1;j<count;j++){
		 				ptr[i]=ptr[j];
					 }
					 count--;
				 }
				 
			 }
		 	
		 }
	 if(choice==4){
		cout<<"Exit...";
		break;	
	}			
	}

while(choice!=4);
   
}