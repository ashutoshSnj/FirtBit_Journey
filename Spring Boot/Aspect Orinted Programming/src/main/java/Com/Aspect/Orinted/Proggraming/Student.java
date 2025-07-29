package Com.Aspect.Orinted.Proggraming;

public class Student {
  boolean valid;
  public Student() {
	// TODO Auto-generated constructor stub
}
public Student(boolean valid) {
	super();
	this.valid = valid;
}
public boolean isValid() {
	return valid;
}
public void setValid(boolean valid) {
	this.valid = valid;
}
  public void takeExams() {
	// in classic programmning approch 
	  //checking of fees would be implements as part of this metho
	  // int Aop, we identyfy the aspect , and configure it for flexibility
	  System.out.println(this.getClass().getName()+"in take exam");
	  if(valid==true) {
		  System.out.println("Appering for Exams");
	  }
	  else {
		  System.out.println("You cannot apper for Exam");
	  }
  }
  public void takeMock() {
	  if(valid==true) {
		  System.out.println("Appering for mock");
	  }
	  else {
		  System.out.println("You cannot apper for mock");
	  } 
  }
  public void Complite_Addmission() {
	  System.out.println("Addmission Complited");
	  System.out.println(this.getClass().getName()+"in complite adm");
  }
}
