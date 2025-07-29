package EmployesHire;

public class ExpertiseNotMatch extends Exception {
     
	
		public ExpertiseNotMatch(String str) {
			super(str);
		}
	
	public void givemsg( ) {
    	  System.out.println("our Requrement is Java full "
    	  		+ "stack/Microservices/Software \r\n"
    	  		+ "Development");
    	  
      }
}
