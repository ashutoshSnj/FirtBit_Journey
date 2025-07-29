package bufferandbulder;

public class Mainapp {

	public static void main(String[] args) {
	 	StringBuffer ref1= new StringBuffer("Ashutosh");
		StringBuilder ref2= new StringBuilder("Ashutosh");
		
		System.out.println(ref1.toString() +"    "+ ref1.append(false));
		ref2.append(" Shelke");
        System.out.println(ref2);
        String str="ashu";
        String ptr=new String("ashu");
        System.out.println(str.equals(ptr));
	}

}
