package factrypattern;

public class factoryclass {
      public static Factory getvehical(String obj) {
    	  if (obj.equalsIgnoreCase("Bick")){
    		  return new Bike();
    	  }
    	  else if(obj.equalsIgnoreCase("Car")){
    		  return new car();
    	  }
    	  else {
    		  System.out.println("unknown vehical type = "+ obj);
    		  return null;
    	  }
      }
}
