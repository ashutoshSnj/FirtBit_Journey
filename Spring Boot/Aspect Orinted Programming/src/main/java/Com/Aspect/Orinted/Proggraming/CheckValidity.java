package Com.Aspect.Orinted.Proggraming;

import org.aspectj.lang.JoinPoint;

public class CheckValidity {
   public CheckValidity() {
	
}
   public void hasPaid(JoinPoint jp) {
	 
	   Student obj=(Student) jp.getTarget();
	//   System.out.println("Checking if fees paid or not");
	   System.out.println(this.getClass().getName() + "in haspaid");
	   obj.valid=true;
   }
}
