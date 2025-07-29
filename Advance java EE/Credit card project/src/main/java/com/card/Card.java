package com.card;

//this is known as entity class
// vo(value object / dtd(data trancfer object) we pass the data from one leyer to another leyer so we sey itt dtd
// pojo(plain old java object)/ bean
public class Card {
     String cardno;
     String name;
     String expdate;
     String cvv;
     
     public Card() {
		// TODO Auto-generated constructor stub
	}

	public Card(String cardno, String name, String expdate, String cvv) {
		super();
		this.cardno = cardno;
		this.name = name;
		this.expdate = expdate;
		this.cvv = cvv;
	}

	public String getCardno() {
		return cardno;
	}

	public void setCardno(String cardno) {
		this.cardno = cardno;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getExpdate() {
		return expdate;
	}

	public void setExpdate(String expdate) {
		this.expdate = expdate;
	}

	public String getCvv() {
		return cvv;
	}

	public void setCvv(String cvv) {
		this.cvv = cvv;
	}
     
	
}
