


public class Mainapp {

	public static void main(String[] args) {
		Address arr=new Address("sungamner","maharashtra");
	 Card.setirat(23);
		//Card pq=new Card();
//	System.out.println(arr.getLine1());
		System.out.println(arr.getLine2());
		//Card ref=new Card(12,"ashutsh",1256325,arr);
	//	ref.display();
		//System.out.println(ref);
	
    //  Card qur=new Card(45,"Shelke",47854,new Address("Deothan","Akole"));
     // qur.display();
	 // in java string and array is a class 
        // in java Array and String are a object 
		Card brr[]=new Card[3];
	   // hear we creat a  refrence array of card class  which is store the refrrence of the card object
	   // initiall in that array are null mean null value refrence 
	
		for(int i=0;i<3;i++) {
			brr[i]= new Card (12,"ashutsh",1256325,arr);
			//hear we make the 3 objeact of the card and pass its refrence brr[] array object 
		}
		for(int i=0;i<3;i++){
			brr[i].display();
		}
		
	}
	

}

 class Address {
	String line1;
	String line2;
	public String getLine1() {
		return line1;
	}
	public void setLine1(String line1) {
		this.line1 = line1;
	}
	public String getLine2() {
		return line2;
	}
	public void setLine2(String line2) {
		this.line2 = line2;
	}
	public Address(String line1, String line2) {
		this.line1 = line1;
		this.line2 = line2;
	}
	public Address() {
		
	}
	

}
 class Card {
	int id;
	String Holder_name;
	float balance;
    Address postal;
	static int irat=12;
	static void setirat(int Irat){
		irat=Irat;
	}
	public Card() {
		System.out.println("defoult counstructer call");
	}
  public void display() {
	 System.out.println("id is "+this.id);
	 System.out.println("holder name is "+this.Holder_name);
	 System.out.println("balamce is = "+this.balance);
	 System.out.println("addres is = "+ this.postal.line1);
	 System.out.println("another Addres is "+this.postal.line2);
  }
	public Card(int id, String holder_name, float balance,Address add) {
		this.id = id;
		this.Holder_name = holder_name;
		this.balance = balance;
		this.postal=add;
	}
	

	public Address getPostal() {
		return postal;
	}
	public void setPostal(Address postal) {
		this.postal = postal;
	}
	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getHolder_name() {
		return Holder_name;
	}

	public void setHolder_name(String holder_name) {
		Holder_name = holder_name;
	}

	public float getBalance() {
		return balance;
	}

	public void setBalance(float balance) {
		this.balance = balance;
	}

}
