package rolebase;

public class Developer extends Employee {
	public Developer() {
		// TODO Auto-generated constructor stub
	}
	
	
	public Developer(int id, String name, Double salary) {
		super(id, name, salary);
		// TODO Auto-generated constructor stub
	}


	public void pay() {
		System.out.println("Developer call");
		
		
	}

}
