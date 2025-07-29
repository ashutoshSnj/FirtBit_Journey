package Com.Coin.Hibernate;

import java.util.Scanner;

import org.hibernate.Session;
import org.hibernate.Transaction;

import Com.Coin.Entity.Coin;
import Com.Coin.Main.Application_Start;

public class Delete_Opration {

	public static Coin remove() {
		Scanner Sc=new Scanner(System.in);
		Session session=Application_Start.getSession();
		Transaction transaction =session.beginTransaction();
		System.out.println("Enter the id = ");
		int id=Sc.nextInt();
		/*ArrayList<Coin> list=(ArrayList<Coin>) session.createQuery("FROM Coin",Coin.class).getResultList();
		
		Coin ref= list.stream().filter(val->val.getCoin_id()==id).findAny().get();
		    session.delete(ref);*/
		
		Coin coin = session.get(Coin.class,id);
		try {
		
			session.delete(coin);
			transaction.commit();
		 System.out.println("Student with ID " + id + " has been deleted successfully!");
			return coin;
		} catch (IllegalArgumentException obj) {
			// TODO Auto-generated catch block
			System.out.println("Id Does not Found");
		}
		finally{
			
			session.close();
		}
		
		return coin;
		
		
	}
}
