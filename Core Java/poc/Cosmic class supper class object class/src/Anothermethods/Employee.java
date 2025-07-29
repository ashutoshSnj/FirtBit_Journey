package Anothermethods;

public class Employee {
   int id;
   String name;
   Double Salary;
   Date Dob;
   
public Employee(int id, String name, Double salary, Date dob) {

	this.id = id;
	this.name = name;
	this.Salary = salary;
	this.Dob = dob;
}


protected Object clone() throws CloneNotSupportedException {
	
	 // Create a shallow copy
    Employee cloned = (Employee) super.clone();

    // Perform deep copy for the Date field
    cloned.Dob = (Date) this.Dob.clone();

    return cloned;
}

   
}
