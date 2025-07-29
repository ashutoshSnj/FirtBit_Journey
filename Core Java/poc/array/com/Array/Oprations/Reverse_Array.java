package com.Array.Oprations;

public class Reverse_Array {
	public static void main(String[] args) {
		int[] arr= {23,45,6,7,8,9};
		  int j=arr.length-1;
		for(int i=0;i<arr.length/2;i++) {
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j--;
		}
	  for(int b:arr) {
		  System.out.println(b);
	  }
	  
	  

}
}

