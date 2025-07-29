package Builtinmethods;

public class equaltomethod {

	public static void main(String[] args) {
		// this method compair two refrence of the object
// this method is override in the string class so we can compair two string 
		//with help of this method this method bydefoult  for the string object only
		// compair actual content becose thei is overridde in string class
	// but this method does not override in stringbuffer and string builder class 
 // so this object that method compair the reference

		String str="Ashutosh";
		String ptr="Ashutosh";
		String xyz=new String ("Ashutosh");
		boolean result=str.equals(str);
		boolean result1=str.equals(xyz);
		System.out.println(result);
		System.out.println(result1);
		// both are true 
		
// =======================================================================================
		StringBuffer str1=new StringBuffer("Ashutosh");
		StringBuffer str2=new StringBuffer("Ashutosh");
		boolean res=str1.equals(str2);
		System.out.println(res);
		// output if false beace theis eaual method check the
		//object refrence not the content 
		// all other object for userdefain classes or string buffer strinbuilder class 
		// all class object for this method compair the refrence 
		// only string class object this method check actual containt
  //=========================================================================================
		
		

	}

}
