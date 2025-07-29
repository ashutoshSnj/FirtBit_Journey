package AccountStream;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;

public class intermidiateopration {
	 public static void main(String[] args) {
		 ArrayList <Account> accounts=new ArrayList<Account>();
			//   accounts.add(1,23,"Ashutosh",458985,'M');
		 
			   accounts.add(new Account(1,23,"Ashutosh",25632,"M"));
			   accounts.add(new Account(5,45,"Sanjay",89632,"M"));
			   accounts.add(new Account(78,53,"Mahesh",5263, "f"));
			   accounts.add(new Account(89,23,"Mayuri",5632,"f"));
			   accounts.add(new Account(8,23,"ashutosh",25632,"M"));
			   
     Map<String,List<Account>> refrence=accounts.stream().filter(ref->ref.name.equals("Ashutosh"))
			.collect(Collectors.groupingBy(Account::getGender));
  		   
	 }
	 public static List accountcreat() {
		 List <Account> accounts=new ArrayList<Account>();
			//   accounts.add(1,23,"Ashutosh",458985,'M');
		 
			   accounts.add(new Account(1,23,"Ashutosh",25632,"M"));
			   accounts.add(new Account(5,45,"Sanjay",89632,"M"));
			   accounts.add(new Account(78,53,"Mahesh",5263, "f"));
			   accounts.add(new Account(89,23,"Mayuri",5632,"f"));
			   accounts.add(new Account(8,23,"ashutosh",25632,"M"));
			    return accounts;
	 }
}
