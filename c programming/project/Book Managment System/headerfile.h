#ifndef HEAERFILE_H
#define HEDERFILE_H


typedef struct Book {
    int book_id;
    char book_name[50];
    char author_name[50];
    char category[60];
    int price;
    float rating;
} Book;

void HardcodedBooks(Book*arr );
void display(Book*, int );
void stor(Book*,int);
void search(Book*,int);
void topbook(Book*,int );
void maxbook(Book*,int);
void update(Book*,int);
void author(Book*,int);
void removebook(Book*,int*);
#endif