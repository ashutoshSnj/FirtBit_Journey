/*#include<iostream>
using namespace std;
#include<string.h>
class LibraryItem{
    char title[20];
    char author[20];
    int publicationYear;
    int itemId;
    public:
    LibraryItem(char* t,char* a,int y,int id){
        strcpy(this->title,t);
        strcpy(this->author,a);
        this->publicationYear=y;
        this->itemId=id;
    }
    void setTitle(char* t){
        strcpy(this->title,t);
    }
    void setAuthor(char* a){
        strcpy(this->author,a);
    }
    void setYear(int y){
        this->publicationYear=y;
    }
    void setId(int id){
        this->itemId=id;
    }
    char* getTitle(){
        return this->title;
    }
    char* getAuthor(){
        return this->author;
    }
    int getYear(){
        return this->publicationYear;
    }
    int getId(){
        this->itemId;
    }
    virtual void displayDetails()=0;
};
class Book:public LibraryItem{
    int isbn;
    int nOfPages;
    public:
    // Book(){
    //     this->isbn=0;
    //     this->nOfPages=0;
    // }
    Book(char* t,char* a,int y ,int id,int isbn,int n):LibraryItem(t,a,y,id){
        this->isbn=isbn;
        this->nOfPages=n;
    }
    void setISBN(int isbn){
        this->isbn=isbn;
    }
    void setNOfPages(int n){
        this->nOfPages=n;
    }
    int getISBN(){
        return this->isbn;
    }
    int getNOfPages(){
        return this->nOfPages;
    }
    void displayDetails(){
        cout<<"---------Book-------------="<<endl;
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Author : "<<getAuthor()<<endl;
        cout<<"Publication Year : "<<getYear()<<endl;
        cout<<"Item id : "<<getId()<<endl;
        cout<<"ISBN NO : "<<getISBN()<<endl;
        cout<<"No of Pages of : "<<getNOfPages()<<endl;
    }
};
class Magazine:public LibraryItem{
    int issueNumber;
    int volumeNumber;
    public:
    Magazine(char* t,char* a,int y,int id,int in,int vn):LibraryItem(t,a,y,id){
        this->issueNumber=in;
        this->volumeNumber=vn;
    }
    void setIN(int in){
        this->issueNumber=in;
    }
    void setVN(int vn){
        this->volumeNumber=vn;
    }
    int getIN(){
        return this->issueNumber;
    }
    int getVN(){
        return this->volumeNumber;
    }
    void displayDetails(){
        cout<<"------Magazine---------"<<endl;
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Author : "<<getAuthor()<<endl;
        cout<<"Publication Year : "<<getYear()<<endl;
        cout<<"Item id : "<<getId()<<endl;
        cout<<"Issue Number : "<<getIN()<<endl;
        cout<<"Volume Number : "<<getVN()<<endl;
    }
};
class DVD:public LibraryItem{
    double duration;
    double rating;
    public:
    DVD(char* t,char* a,int y,int id,double d,double r):LibraryItem(t,a,y,id){
        this->duration=d;
        this->rating=r;
    }
    void setDuration(double d){
        this->duration=d;
    }
    void setRating(double r){
        this->rating=0;
    }
    double getDuration(){
        return this->duration;
    }
    double getRating(){
        return this->rating;
    }
    void displayDetails(){
        cout<<"-------DVD--------"<<endl;
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Author : "<<getAuthor()<<endl;
        cout<<"Publication Year : "<<getYear()<<endl;
        cout<<"Item id : "<<getId()<<endl;
        cout<<"Duration : "<<getDuration()<<endl;
        cout<<"Rating  : "<<getRating()<<"*"<<endl;
    }
};
int main(){
    LibraryItem* items[10];
    int itemCount = 0, choice;
    while(true){
        cout<<"\n1: Add Item\n2: Display Items\n3: Remove Item"<<endl;
        cin>>choice;

        if (choice==1) {
            int type,year,id,isbn,nPages,issue,volume;
            char title[20],author[20];
            double duration,rating;
            cout<<"1: Book\n2: Magazine\n3: DVD\n";
            cin>>type;
            cout<<"Enter Title: ";
            cin>>title;
            cout<<"Enter Author: ";
            cin>>author;
            cout<<"Enter Publication Year: ";
            cin>>year;
            cout<<"Enter Item ID: ";
            cin>>id;
            if (type==1) {
                cout<<"Enter ISBN: ";
                cin>>isbn;
                cout<<"Enter Number of Pages: ";
                cin>>nPages;
                items[itemCount++]=new Book(title,author,year,id,isbn,nPages);
            } else if(type==2){
                cout << "Enter Issue Number: ";
                cin >> issue;
                cout << "Enter Volume Number: ";
                cin >> volume;
                items[itemCount++]= new Magazine(title,author,year,id,issue,volume);
            } else if(type==3){
                cout<<"Enter Duration: ";
                cin >>duration;
                cout<<"Enter Rating: ";
                cin>>rating;
                items[itemCount++]=new DVD(title,author,year,id,duration,rating);
            }
        }else if(choice==2){
            if(itemCount==0){
                cout << "No items in the library"<<endl;
            } else {
                for(int i=0;i<itemCount;i++) {
                    items[i]->displayDetails();
                }
            }
        }else if(choice==3){
            if(itemCount==0){
                cout<<"No items in the library"<<endl;
            }else{
                int id;
                cout<<"Enter the Item ID to remove: ";
                cin>>id;
                int indexToRemove=-1;
                for(int i=0;i<itemCount;i++){
                    if(items[i]->getId()==id){
                        indexToRemove=i;
                        break;
                    }
                }
                if(indexToRemove==-1){
                    cout<< "Item not found"<<endl;
                }else{
                    delete items[indexToRemove];
                    for(int i=indexToRemove;i<itemCount-1;i++){
                        items[i]=items[i+1];
                    }
                    itemCount--;
                }
            }
        }else{
            cout << "Invalid choice. Please try again.\n";
        }
    }



    // int num;
    // cout<<"Enter number - "<<endl<<"1 : Add"<<endl<<"2 : Remove"<<endl<<"3 : Display"<<endl;
    // LibraryItem* l;
    // switch (num)
    // {
    // case 1:
    //     int n;
    //     cout<<"What you want to add - "<<endl<<"1  : Book"<<endl<<"2 : Magazine"<<endl<<"3 : DVD"<<endl;
    //     cin>>n;
    //     switch(n){
    //         case 1:
    //             cout<<"Enter Details for Book : "<<endl;
    //             char title[20];
    //             char author[20];
    //             int publicationYear;
    //             int itemId;
    //             cout<<"Enter Title : "<<endl;
    //             cin>>title;
    //             cout<<"Enter Author Name : "<<endl;
    //             cin>>author;
    //             cout<<"Enter Publication Year : "<<endl;
    //             cin>>publicationYear;
    //             cout<<"Enter id  :"<<endl;
    //             cin>>itemId;
    //             int isbn;
    //             int nOfPages;
    //             cout<<"Enter ISBN Number :"<<endl;
    //             cin>>isbn;
    //             cout<<"Enter No of Pages : "<<endl;
    //             cin>>nOfPages;
    //             Book b1(title,author,publicationYear,itemId,isbn,nOfPages);
    //             l=&b1;
    //             break;

    //         case 2:
    //             cout<<"Enter Details for Magazine : "<<endl;
    //             char title[20];
    //             char author[20];
    //             int publicationYear;
    //             int itemId;
    //             cout<<"Enter Title : "<<endl;
    //             cin>>title;
    //             cout<<"Enter Author Name : "<<endl;
    //             cin>>author;
    //             cout<<"Enter Publication Year : "<<endl;
    //             cin>>publicationYear;
    //             cout<<"Enter id  :"<<endl;
    //             cin>>itemId;
    //             int issueNumber;
    //             int volumeNumber;
    //             cout<<"Enter Issue Number :"<<endl;
    //             cin>>issueNumber;
    //             cout<<"Enter Volume Number : "<<endl;
    //             cin>>volumeNumber;
    //             Magazine m1(title,author,publicationYear,itemId,issueNumber,volumeNumber);
    //             break;
    //         case 3:
    //             cout<<"Enter Details for DVD : "<<endl;
    //             char title[20];
    //             char author[20];
    //             int publicationYear;
    //             int itemId;
    //             cout<<"Enter Title : "<<endl;
    //             cin>>title;
    //             cout<<"Enter Author Name : "<<endl;
    //             cin>>author;
    //             cout<<"Enter Publication Year : "<<endl;
    //             cin>>publicationYear;
    //             cout<<"Enter id  :"<<endl;
    //             cin>>itemId;
    //             double duration;
    //             double rating;
    //             cout<<"Enter Duration : "<<endl;
    //             cin>>duration;
    //             cout<<"Enter Rating : "<<endl;
    //             cin>>rating;
    //             DVD d1(title,author,publicationYear,itemId,duration,rating);
    //             break;

    //         default :
    //             cout<<"Wrong Input "<<endl;
    //             break;
    //     }
        
    // case 2:
    //     break;
    
    // case 3:
    //     int n;
    //     cout<<"What You want to display - "<<endl<<"1 : Book"<<endl<<"2 : Magazine"<<endl<<"3 : DVD"<<endl;
    //     cin>>n;
    //     switch(n){
    //         case 1:
    //             l->displayDetails();
    //     }

    // default:
    //     cout<<"Wrong Input!"<<endl;
    //     break;
    // }

    


}*/
#include <iostream>
#include <cstring>
using namespace std;

class Libraryitem {
    char title[30];
    char author[30];
    int publication_year;
    int itemid;

public:
    Libraryitem() {
        strcpy(this->title, "not given");
        strcpy(this->author, "not given");
        this->publication_year = 0;
        this->itemid = 0;
    }

    Libraryitem(char* title, char* author, int year, int itemid) {
        strcpy(this->title, title);
        strcpy(this->author, author);
        this->publication_year = year;
        this->itemid = itemid;
    }

    void settitle(char* title) {
        strcpy(this->title, title);
    }

    void setauthor(char* author) {
        strcpy(this->author, author);
    }

    void setyear(int year) {
        this->publication_year = year;
    }

    void setitemid(int id) {
        this->itemid = id;
    }

    char* gettitle() {
        return this->title;
    }

    char* getauthor() {
        return this->author;
    }

    int getyear() {
        return this->publication_year;
    }

    int getitemid() {
        return this->itemid;
    }

    virtual void display() = 0;
};

class Book : public Libraryitem {
    int isbn;
    int no_of_pages;

public:
    Book() : Libraryitem() {
        this->isbn = 0;
        this->no_of_pages = 0;
    }

    Book(char* tit, char* aut, int yer, int id, int isbn, int pages)
        : Libraryitem(tit, aut, yer, id) {
        this->isbn = isbn;
        this->no_of_pages = pages;
    }

    void display() override {
        cout << "Title: " << gettitle() << endl;
        cout << "Author: " << getauthor() << endl;
        cout << "Publication Year: " << getyear() << endl;
        cout << "Item ID: " << getitemid() << endl;
        cout << "ISBN: " << this->isbn << endl;
        cout << "Number of Pages: " << this->no_of_pages << endl;
    }

    void setisbn(int isbn) {
        this->isbn = isbn;
    }

    void setno_pages(int pages) {
        this->no_of_pages = pages;
    }

    int getisbn() {
        return this->isbn;
    }

    int getno_pages() {
        return this->no_of_pages;
    }
};

class Magazine : public Libraryitem {
    int issue_num;
    int volume_no;

public:
    Magazine() : Libraryitem() {
        this->issue_num = 0;
        this->volume_no = 0;
    }

    Magazine(char* tit, char* aut, int yer, int id, int issuno, int vol)
        : Libraryitem(tit, aut, yer, id) {
        this->issue_num = issuno;
        this->volume_no = vol;
    }

    void display() override {
        cout << "Title: " << gettitle() << endl;
        cout << "Author: " << getauthor() << endl;
        cout << "Publication Year: " << getyear() << endl;
        cout << "Item ID: " << getitemid() << endl;
        cout << "Issue Number: " << this->issue_num << endl;
        cout << "Volume Number: " << this->volume_no << endl;
    }

    void setissue_no(int no) {
        this->issue_num = no;
    }

    void setvolume_no(int no) {
        this->volume_no = no;
    }

    int getissue_no() {
        return this->issue_num;
    }

    int getvolume_no() {
        return this->volume_no;
    }
};

class DVD : public Libraryitem {
    double duration;
    double rating;

public:
    DVD() : Libraryitem() {
        this->duration = 0.0;
        this->rating = 0.0;
    }

    DVD(char* tit, char* aut, int yer, int id, double dur, double rat)
        : Libraryitem(tit, aut, yer, id) {
        this->duration = dur;
        this->rating = rat;
    }

    void display() override {
        cout << "Title: " << gettitle() << endl;
        cout << "Author: " << getauthor() << endl;
        cout << "Publication Year: " << getyear() << endl;
        cout << "Item ID: " << getitemid() << endl;
        cout << "Duration: " << this->duration << " hours" << endl;
        cout << "Rating: " << this->rating << endl;
    }

    void setduration(double duration) {
        this->duration = duration;
    }

    void setrating(double rating) {
        this->rating = rating;
    }

    double getduration() {
        return this->duration;
    }

    double getrating() {
        return this->rating;
    }
};

int main() {
    Libraryitem* ptr[30];
    int count=0;
    int choice;

    do {
        cout<<"1) Add an Item\n2) Display All Items\n3) Remove an Item\n4) Exit\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "1) Add Book\n2) Add Magazine\n3) Add DVD\nEnter your choice: ";
            int type;
            cin >> type;

            char title[30], author[30];
            int publication_year, itemid;

            cout << "Enter Title: ";
            cin >> title;
            cout << "Enter Author: ";
            cin >> author;
            cout << "Enter Publication Year: ";
            cin >> publication_year;
            cout << "Enter Item ID: ";
            cin >> itemid;

            if (type == 1) {
                int isbn, no_of_pages;
                cout << "Enter ISBN: ";
                cin >> isbn;
                cout << "Enter Number of Pages: ";
                cin >> no_of_pages;
                items[itemCount++] = new Book(title, author, publication_year, itemid, isbn, no_of_pages);
            } else if (type == 2) {
                int issue_num, volume_no;
                cout << "Enter Issue Number: ";
                cin >> issue_num;
                cout << "Enter Volume Number: ";
                cin >> volume_no;
                items[itemCount++] = new Magazine(title, author, publication_year, itemid, issue_num, volume_no);
            } else if (type == 3) {
                double duration, rating;
                cout << "Enter Duration (in hours): ";
                cin >> duration;
                cout << "Enter Rating: ";
                cin >> rating;
                items[itemCount++] = new DVD(title, author, publication_year, itemid, duration, rating);
            } else {
                cout << "Invalid choice!\n";
            }

        } else if (choice == 2) {
            for (int i = 0; i < itemCount; i++) {
                items[i]->display();
                cout << "-------------------\n";
            }
        } else if (choice == 3) {
            cout << "Enter the Item ID to remove: ";
            int id;
            cin >> id;
            bool found = false;

            for (int i = 0; i < itemCount; i++) {
                if (items[i]->getitemid() == id) {
                    delete items[i];
                    for (int j = i; j < itemCount - 1; j++) {
                        items[j] = items[j + 1];
                    }
                    itemCount--;
                    found = true;
                    cout << "Item removed successfully.\n";
                    break;
                }
            }

            if (!found) {
                cout << "Item ID not found!\n";
            }
        } else if (choice != 4) {
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    for (int i = 0; i < itemCount; i++) {
        delete items[i];
    }

    return 0;
}

