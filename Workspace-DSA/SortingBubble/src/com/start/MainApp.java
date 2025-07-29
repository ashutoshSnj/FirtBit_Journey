package com.start;

public class MainApp {
  public static void main(String[] args) {
//	Node[] data=new Node[20];
	Node [] data1= new Node[] {new Node(41),new Node(74)};
	
}
  public void bubbleSort(Node[] toBeSorted) {
	  int length=toBeSorted.length;
	  
	  for(int outerCtr=0;outerCtr<toBeSorted.length-1; outerCtr++) {
		  for(int innerCtr=0;innerCtr<1;innerCtr++) {
			  if (toBeSorted[innerCtr].data>toBeSorted[innerCtr+1].data) {
				  //int temp=toBeSorted[innerCtr].data=
			  }
		  }
	  }
  }
}