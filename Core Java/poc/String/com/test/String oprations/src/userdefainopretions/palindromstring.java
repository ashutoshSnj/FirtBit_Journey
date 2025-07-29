package userdefainopretions;
import java.util.Scanner;

public class palindromstring {

	public static void main(String[] args) {
	     String Str="madam";
	    // System.out.println(Str.charAt(0));
	     StringBuffer str1=new StringBuffer("Ashutosh");
	     //System.out.println(str1.charAt(0));
// ====================================================================================
	     Scanner Sc=new Scanner(System.in);
	     System.out.println("Enter the String = ");
	     String xyz=Sc.nextLine();
	     
	    int length=xyz.length();
	    StringBuffer ref = new StringBuffer();
	    char ch;
	    for(int i=length-1;i>=0;i--) {
	    	ch=xyz.charAt(i);
	    	ref.append(ch);
	    }
	    if (xyz.equals(ref.toString())) {
	    	System.out.println("String are pallindrom");
	    }
	    else {
	    	System.out.println("String not pallindrom");
	    }

	}

}
