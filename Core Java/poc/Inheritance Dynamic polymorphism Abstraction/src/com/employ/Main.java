package com.employ;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		     Scanner sc= new Scanner (System.in);
		   System.out.println("Enter the size of Array = ");
		   int size=sc.nextInt();
		  Employee[]AllEmploye= new Employee[size];
		  int choice;
		  int count=0;
		  do{
			  System.out.println("What You want to Add ");
			  System.out.println("1) Hr ");
			  System.out.println("2) Admin ");
			  System.out.println("3) Salsemanager ");
			  System.out.println("4) Display Total Salary ");
			  System.out.println("5) Exit");
			  System.out.println("Enter the choice = ");
			  choice=sc.nextInt();
			  if(choice>5) {
				  continue;
			  }
			  if(choice==5) {
				  System.out.println("Exit...");
				  break;
			  }
			  if(choice==4) {
				  TotalSalary(AllEmploye,count);
				  continue;
			  }
			  System.out.println("Enter the id = ");
			  int id=sc.nextInt();
			   sc.nextLine();
			  System.out.println("Enter the name = ");
			  String name=sc.nextLine();
			  System.out.println("Enter the salary = ");
			  double salary=sc.nextDouble();
			  if(choice==1) {
				  System.out.println("Enter the Allowance = ");
				  double allowance= sc.nextDouble();
				  AllEmploye[count++]=new Hr(id,name,salary,allowance);
				  System.out.println("Hr Employee Successfully Add....");
			  }
			  else if(choice==2) {
				  System.out.println("Enter the Allowanc = ");
				  double allwance=sc.nextDouble();
				  AllEmploye[count++]=new Admin(id,name,salary,allwance);
				  System.out.println("Admin Employee successfully Add...");
			  }
			  else if(choice==3) {
				  System.out.println("Enter the Incentive = ");
				  double Incentive=sc.nextDouble();
				  System.out.println("Enter the Target = ");
				  int target=sc.nextInt();
				  AllEmploye[count++]=new Salsemanager(id,name,salary,Incentive,target);
				  System.out.println("Salsemanager Employee successfully Add.....");
			  }
			 
			 
		  } while(choice!=5);
	
	}
	
	public static void TotalSalary(Employee[] AllEmp,int count) {
	       for(int i=0;i<count;i++) {
	    	   System.out.println(AllEmp[i].calsal());
	       }
	}

}
