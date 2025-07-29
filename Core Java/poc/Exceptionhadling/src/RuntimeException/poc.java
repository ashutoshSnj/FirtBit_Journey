package RuntimeException;

public class poc {

	public static void main(String[] args) {
	
		int[] arr= {1,5};
		try {
			arr[2]=9;
		}
		catch(ArrayIndexOutOfBoundsException o) {
			System.out.println("not perfect");
		}
		arr[2]=9;
		
	}

}
