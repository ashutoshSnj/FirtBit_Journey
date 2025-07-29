package com.maven.frist;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;
@Entity
@Table (name="Books")
public class Book {
	  @Id
	  @Column (name="Book_id")
     String Book_id;
	  @Id
	  @Column (name="Book_Name")
     String Book_name;
	public String getBook_id() {
		return Book_id;
	}
	public void setBook_id(String book_id) {
		Book_id = book_id;
	}
	public String getBook_name() {
		return Book_name;
	}
	public void setBook_name(String book_name) {
		Book_name = book_name;
	}
	public Book(String book_id, String book_name) {
		Book_id = book_id;
		Book_name = book_name;
	}
	  
}
