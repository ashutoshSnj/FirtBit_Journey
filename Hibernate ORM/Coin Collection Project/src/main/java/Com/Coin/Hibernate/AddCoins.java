package Com.Coin.Hibernate;

import java.util.Scanner;

import org.hibernate.Session;
import org.hibernate.Transaction;

import Com.Coin.Entity.Coin;
import Com.Coin.Main.Application_Start;
import jakarta.persistence.Column;

public class AddCoins {
	public static void AddCoin() {
		Scanner Sc=new Scanner(System.in);
		Session session=Application_Start.getSession();
		Transaction transaction =session.beginTransaction();
		System.out.println("Enter the Details of Coin  ");
		String Country,Denomination,Acquired_date;
		int Year_of_minting; double Current_value;
		System.out.println("Enter the Country = ");
		Country=Sc.nextLine();
		System.out.println("Enter the Denomination = ");
		Denomination=Sc.nextLine();
		System.out.println("Enter the Acquired date like 2002/09/07 = ");
		Acquired_date=Sc.nextLine();
		System.out.println("Enter the Year_of_minting = ");
		Year_of_minting=Sc.nextInt();
		System.out.println("Enter the Current value");
		Current_value=Sc.nextDouble();
		Coin coin=new Coin(Country,Denomination,Year_of_minting,Current_value,Acquired_date);
		session.persist(coin);
		transaction.commit();
		System.out.println("Coin Sucsesfully add....");
		session.close();	
	}

}
