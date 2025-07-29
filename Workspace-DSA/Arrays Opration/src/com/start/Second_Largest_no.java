package com.start;

public class Second_Largest_no {
          public static void main(String[] args) {
			int [] arr= {85,52,62,962,56,84};
		for(int i=0;i<arr.length;i++) {
			for(int j=i+1;j<arr.length;j++) {
				if(arr[i]<arr[j]) {
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					
				}
			}
		}
		for(int num:arr) {
			System.out.println(num);
		}
          }
}
