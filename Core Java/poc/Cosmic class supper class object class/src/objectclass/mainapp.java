package objectclass;


public class mainapp {
  public static void main(String[] args) {
	  entity1 ref1=new entity1 (1,"Ashutosh");
	  entity1 ref2=new entity1 (1,"Ashutosh");
	      boolean result = ref1.equals(ref2);
	        
	      // before overriding the cosmic class , object class method 
	      // output = Deffernt becose thes bydefoult method also cheek the refrences 
	      // we need to overridde it 
	      if(result) {
	    	  System.out.println("same");
	      }
	      else {
	    	  System.out.println("Deffernt");
	      }
	      
	      boolean result2= ref1.name.equals(ref2.name);
	      // but ha this output is same 
	      // becos this time we pass the string object ref so our class entity1 class 
	      // equalto method does not call the this time they call a string class method 
	      // and also valuea are same then value are stor on scp 
	      // but this method cheek ref but also both object contan same string object ref 
	      // so they show same 
	      if(result2) {
	    	  System.out.println("same");
	      }
	      else {
	    	  System.out.println("Deffernt");
	      }
	     //////////////////////////////////////////////
	      // after overriding function
	// same
	     
	      
	     
  }
  

}
