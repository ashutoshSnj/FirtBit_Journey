package RuntimeException;

//User-defined unchecked exception (extends RuntimeException)
class InvalidAgeException extends RuntimeException {
 public InvalidAgeException(String message) {
     super(message);
 }
}

public class Example {
 public static void checkAge(int age) {
     if (age < 0) {
         throw new InvalidAgeException("Age cannot be negative!");
     } else {
         System.out.println("Valid age: " + age);
     }
 }

 public static void main(String[] args) {
     try {
         checkAge(-5);  // This will throw the user-defined RuntimeException
     } catch (InvalidAgeException e) {
         System.out.println("Caught exception: " + e.getMessage());
     }
     
     checkAge(8);
 }
}
