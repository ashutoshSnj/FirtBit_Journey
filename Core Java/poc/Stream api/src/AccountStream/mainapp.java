package AccountStream;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;

public class mainapp {

	public static void main(String[] args) {
	   ArrayList <Account> accounts=new ArrayList<Account>();
	//   accounts.add(1,23,"Ashutosh",458985,'M');
	   accounts.add(new Account(1,23,"Ashutosh",25632,"M"));
	   accounts.add(new Account(5,45,"Sanjay",89632,"M"));
	   accounts.add(new Account(78,53,"Mahesh",5263, "f"));
	   accounts.add(new Account(89,23,"Mayuri",5632,"f"));
	   accounts.add(new Account(8,23,"ashutosh",25632,"M"));
	   
	   /*
	     for(Account ref:accounts) {
	    	 System.out.println(ref);
	     }
	     System.out.println("=========================================");
	   accounts.stream().filter(ref->ref.getAge()>30).forEach(ref->ref.setSalary(7856.23));
	   for(Account ref:accounts) {
	    	 System.out.println(ref);
	     }
	 
	    // gruping by internally store the data in map<datatype ,list<datatype>
	   // hear we specify hashmap thats why we need to cast so we write this 
	                                    //  this to                      this  
  HashMap<String,List<Account>> myacc=(HashMap<String, List<Account>>) accounts.stream()
		  .collect(Collectors.groupingBy(Account::getName));
	   // hear not specifiy or cast them becose we accept the map
	   Map<String,List<Account>> myacc1= accounts.stream()
               .collect(Collectors.groupingBy(Account::getName));

	   // in map defoult javm use hashmap and list use arraylist
	   
	   
	   
	   
	   
	   //filtering 
	  /* List<Account> updatedac=accounts.stream().filter(ref->ref.getAge()>18&&ref.getSalary()<60000)
			   .collect(Collectors.toList());
	   System.out.println(updatedac);
	   double totalsalary= accounts.stream().filter(ref->ref.name.equals("Ashutosh") || ref.name.equals("Mayuri"))
			  .mapToDouble(Account::getSalary).sum();
	   System.out.println(totalsalary);*/
	   //grouping
	   Map<String ,List<Account>> ref1= accounts.stream().collect(Collectors.groupingBy(Account::getGender));
	  System.out.println(ref1);
			   
			   
			   
			/*   
			   
			   
	   Map<String, Integer> genderSum = accounts.stream()
               .collect(Collectors.groupingBy(Account::getGender, 
                          Collectors.summingInt(Account::getId)));
	   genderSum.forEach((gender, sum) -> System.out.println(gender + ": " + sum));

	   Map<Integer,String> ref=accounts.stream().collect(Collectors.toMap(Account::getId,Account::getName));
	   // for Each 
	  // accounts.stream().forEach(values->System.out.println(values.getName()));
	  
	   //filter
	   accounts.stream().filter(ref->ref.getGender().equals("M") &&
		    ref.getAge()>18).forEach(name->System.out.println(name.name));
	   
	       in core java filter
	  /* for(Account per:accounts) {
		   if(per.getGender().equals("M")&&per.getAge()>18) {
			  System.out.println(per.getGender().equals("M")); 
			   System.out.println(per.name);
		   }
	   }
	   
	   // Pipeline
	  double average=accounts.stream().filter(criteria->criteria.getGender().equals("M"))
			  .mapToInt(Account::getAge).average().getAsDouble();
	    System.out.println(average);
	 // System.out.println(accounts.stream());
      */
	}

}
