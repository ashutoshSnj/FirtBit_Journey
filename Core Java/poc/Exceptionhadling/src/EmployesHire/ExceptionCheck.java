package EmployesHire;

import java.util.Scanner;

public class ExceptionCheck {
 public  void  Expertise(String expertise) throws ExpertiseNotMatch {
     if (!(expertise.equalsIgnoreCase("Java Full Stack") || 
           expertise.equalsIgnoreCase("Microservices") || 
           expertise.equalsIgnoreCase("Software Development"))) {
         throw new ExpertiseNotMatch("Invalid expertise. Accepted: Java Full Stack, Microservices, or Software Development.");
     } 
   
 }
  public void Education(String Edu) throws EducationalBackgroundException {
	  if(!(Edu.equalsIgnoreCase("BTech")||Edu.equalsIgnoreCase("BE")||
			  Edu.equalsIgnoreCase("BCA")||Edu.equalsIgnoreCase("MCA")))
	  {
		  throw new EducationalBackgroundException("Education Not Match");
	  }
	  
  }
  public  void PassingYear(int year) throws EmployesHire.PassingYear {
	  if(year<2013|| year>2023) {
		 throw new  PassingYear("Invalid passing year. It must be between 2013 and 2023."); 
	  }
	  
  }
   public void  Language(String lan) throws LanguageException {
	   if (!(lan.equalsIgnoreCase("English"))) {
		   throw new LanguageException("English is Must");
	   }
	  
   }
   public void age(int age) throws AgenotMatch {
	   if(age<18) {
		   throw new AgenotMatch("Age must be greter tan 18");
	   }
	  
   }
   public void ecperiance(int Exp) throws ExperianceNotMatch {
	   if(Exp<5) {
		   throw new  ExperianceNotMatch("Expriance must be 5 years");
	   }
	  
	   
   }
   
   }
 
   

