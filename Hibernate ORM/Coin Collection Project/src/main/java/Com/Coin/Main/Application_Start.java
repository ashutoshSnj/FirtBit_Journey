package Com.Coin.Main;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;


import Com.Coin.Entity.Coin;
import Com.Coin.Hibernate.AddCoins;
import Com.Coin.Hibernate.Delete_Opration;
import Com.Coin.Hibernate.List_Oprations;
import Com.Coin.Hibernate.Search_Opration;
import Com.Coin.Hibernate.UpdateValue;


public class Application_Start {
	static SessionFactory factory=new Configuration().configure("hibernate.cfg.xml").buildSessionFactory();
	 static Search_Opration ref=new Search_Opration();
	  static  List_Oprations ref1=new List_Oprations();
	   ArrayList<Coin> Coins;
   
    
	public static Session getSession() {
    	 return factory.openSession();
     }
	public static void Start_Application() {
		Application_Start obj=new Application_Start();
		
		obj.load_Coins();
		obj.Manu();	
		
	}
	public  ArrayList<Coin> load_Coins() {
		Session mysession=getSession();
		Transaction tra=mysession.beginTransaction();
		this.Coins=(ArrayList<Coin>) mysession.createQuery("FROM Coin",Coin.class).getResultList(); 
		tra.commit();
		mysession.close();
		 return this.Coins;
	}
	
	
	public void Manu() {
   	 Scanner sc=new Scanner(System.in);
   	boolean result=true;
   	while(result) {
   		System.out.println("1)Display All Coins");
      	 System.out.println("2)Search");
      	 System.out.println("3)List of Coins");
      	 System.out.println("4)Delete the Coins");
      	 System.out.println("5)Add Coin");
      	 System.out.println("6)update Current Value");
      	 System.out.println("7)Exit....");
      	int choice=sc.nextInt();
      	 if(choice==1) {
      		this.Coins.stream().forEach(ref->System.out.println(ref.toString()));
      	 }
      	 else if(choice==2) {
      		 System.out.println("Enter details = ");
      		 System.out.println("1) Country + Denomination ");
      		 System.out.println("2) Country + Year of Minting");
      		 System.out.println("3) Country + Denomination + Year of Minting");
      		 System.out.println("4) Acquired Date + Country ");
      		 
      		int ch=sc.nextInt();
      	       sc.nextLine();
      		System.out.println("Enter the Country  ");
      		
      	  String country=sc.nextLine();
     
      		 if(ch==1) {
      			 System.out.println("Enter the Denomination = ");
      			ArrayList<Coin> list=ref.Search(this.Coins,country,sc.nextLine());
      			
      			     list.stream().forEach(val->System.out.println(val.toString()));        
      		 } 
      		 else if(ch==2) {
      			 System.out.println("Enter the Year of Minting = ");
      			 int year=sc.nextInt();
      			 ArrayList<Coin> list=ref.Search(this.Coins, country, year);
      			list.stream().forEach(val->System.out.println(val.toString()));   
      			
      		 }
      		 else if(ch==3) {
      			 //Country + Denomination + Year of Minting 
      			 System.out.println("Enter the Denomination  And Year of Minting ");
      			
      			 ArrayList<Coin> list= ref.Search(this.Coins,country,sc.nextLine(), sc.nextInt());
      			list.stream().forEach(val->System.out.println(val.toString()));   
      		 }
      		 else if(ch==4) {
      			 System.out.println("Enter the Acquired Date = ");
      			 ArrayList<Coin> list=ref.Search(sc.nextLine(),country,this.Coins);
       			list.stream().forEach(val->System.out.println(val.toString()));   
      		 }
      		 else if(ch<=5) {
      			 System.out.println("invalid Choice");
      		 }
      	 }
      	 else if(choice==3) {
      		 System.out.println("Enter the Choice ");
      		 System.out.println("1) Country");
      		 System.out.println("2) Year of Minting");
      		 System.out.println("3) Current Value (sorted) ");
      		 int chs=sc.nextInt();
      		 sc.nextLine();
      		 if(chs==1) {
      			 System.out.println("Enter the Country =");
      		 ref1.Coin_List(this.Coins,sc.nextLine()).stream().forEach(ref->System.out.println(ref.toString()));   
      		 }
      		 else if(chs==2) {
      			 System.out.println("Enter the Year of Minting");
      			 ref1.Coin_List(this.Coins,sc.nextInt()).stream().forEach(ref->System.out.println(ref.toString()));   
      		 }
      		 else if(chs==3) {
      			ref1.Coin_List(this.Coins).stream().forEach(ref->System.out.println(ref.toString()));   
      		 }
      	 }
      	 else if(choice==4) {
      	     Delete_Opration.remove();
      	 }
      	else if(choice==5) {
    		AddCoins.AddCoin();
    	 }
      	else if(choice==6) {
      		UpdateValue.update();
   	 }
      	else if(choice==7) {
    		 result=false;
    		 System.out.println("Exits........");
    	 }
      	 
   	}
 
	}
	
}
