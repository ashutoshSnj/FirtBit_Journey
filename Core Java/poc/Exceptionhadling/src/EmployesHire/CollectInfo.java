package EmployesHire;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class CollectInfo {
	Scanner sc=new Scanner(System.in);
	public void SelectEmploye() {
		
		List <Employee> selectedEmp=new ArrayList<Employee>();
		SelectEmployee(selectedEmp);
	}
	public  void SelectEmployee(List<Employee> selectedEmp){
		ExceptionCheck check=new ExceptionCheck();
		String name =null,Exp = null,Edu=null,Language=null;
		int Year = 0,age=0, Excperiance=0 ;
		try {
			System.out.println("Enter the name = ");
			name=sc.nextLine();
			System.out.println("Enter the Expertis = ");
			 Exp=sc.nextLine();
			check.Expertise(Exp);
			System.out.println("Enter the Education = ");
			  Edu=sc.nextLine();
			check.Education(Edu);
			System.out.println("Enter Passing Year = ");
		     Year=sc.nextInt();
			check.PassingYear(Year);
			System.out.println("Enter known languages = ");
			sc.nextLine();
			 Language=sc.nextLine();
			check.Language(Language);
			System.out.println("Enter the Age = ");
			 age=sc.nextInt();
			check.age(age);	
			System.out.println("Enter the Experiance = ");
			Excperiance=sc.nextInt();
			check.ecperiance(Excperiance);
			
		} catch (ExpertiseNotMatch e) {
			///e.printStackTrace();
			e.givemsg();
		}
		
		catch(EducationalBackgroundException o){
			//o.printStackTrace();
			o.yourEduction();
		}
		
		catch(PassingYear o) {
			//o.printStackTrace();
			o.PassingYear();
		}
		catch (LanguageException e) {
	        //  e.printStackTrace();
	          e.Language();
		}
		
		catch(AgenotMatch o) {
			//o.printStackTrace();
			o.AgenotMathc();
		}
		
		catch(ExperianceNotMatch o) {
			//o.printStackTrace();
			o.CandidateExperience();
		}
		finally{
			if(Exp!=null&& Edu!=null&& Language!=null&&Year!=0&&age!=0&&Excperiance!=0) {
				selectedEmp.add(new Employee(name,Exp,Edu,Year,Language,age,Excperiance));
				System.out.println("Candidate Selected");
			}else {
				System.out.println("Candidate not fullfill the requrement ");
			}
		}
	}
	
}
