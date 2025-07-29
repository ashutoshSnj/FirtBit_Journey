package EmployesHire;

public class PassingYear extends Exception {
	public PassingYear(String string) {
		super(string);
	}

	public void PassingYear() {
   	 System.out.println("Passing Criteria is less than 2023 and greater than 2013");
                          
    }
}
