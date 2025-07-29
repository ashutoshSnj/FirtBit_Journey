package EmployesHire;

public class ExperianceNotMatch extends Exception {
  
    public ExperianceNotMatch(String string) {
		// TODO Auto-generated constructor stub
    	super(string);
	}

	public void CandidateExperience() {
    	System.out.println("Your Excperiance is less We Want Above 5");
    }
}
