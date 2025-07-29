package Com.Coin.Hibernate;

import java.util.Scanner;

import org.hibernate.Session;
import org.hibernate.Transaction;

import Com.Coin.Entity.Coin;
import Com.Coin.Main.Application_Start;

public class UpdateValue {
	public static void update() {
		Scanner Sc=new Scanner(System.in);
		Session session=Application_Start.getSession();
		Transaction transaction =session.beginTransaction();
		System.out.println("Enter the id = ");
		int id=Sc.nextInt();
		
	
			
			Coin coin=session.get(Coin.class,id);
		  if(coin==null) {
			  System.out.println("coin not found");
		  }
		  else {
			  System.out.println("Enter the Current Values = ");		
				coin.setCurrent_value(Sc.nextDouble());
				transaction.commit();
				System.out.println("Current value updated...");
				session.close();
			
		  }
			
		
	}
}
