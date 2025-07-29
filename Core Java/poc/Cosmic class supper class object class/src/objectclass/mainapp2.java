package objectclass;

public class mainapp2 {

	public static void main(String[] args) {
	   Entity2 ref=new Entity2(1,"Ashutosh");
	     
	     System.out.println(ref.toString());
	
		// Bydefoult method give objectclass.Entity2@2f92e0f4
	  
	 // internally like that 
   System.out.println(ref.getClass().getName() + "@" + Integer.toHexString(ref.hashCode()));
	   System.out.println(ref);
	   // we print a object name they call internally toString() method
 // to string method befor overriding give output like that
	   // // Bydefoult method give objectclass.Entity2@2f92e0f4
	// after the give according to my person{ id= 1name is = Ashutosh}

	}

}
