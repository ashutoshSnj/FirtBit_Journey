package start.build;

import java.util.Scanner;

public class palindrom {
    public static void main(String[] args) {
		Scanner Sc=new Scanner(System.in);
	  System.out.println("Enter the String = ");
	  StringBuffer str=new StringBuffer(Sc.nextLine());
	   int j=str.length()-1;
	   boolean flag=false;
	   for(int i=0;i<str.length()/2;i++) {
		   if(str.charAt(i)!=str.charAt(j)) {
			   flag=true;
			   break;  
		   }
		   j--;
	   }
	   if(flag) {
		   System.out.println("String is not palindrom");
	   }
	   else {
		   System.out.println("String is palindrom");
	   }
	}
}
