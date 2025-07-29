#include<stdio.h>
int ticket(int*,int );
void main(){
	  int arr[5];
	  printf("Enter the age = ");
	  for(int i=0;i<5;i++){
	  	scanf("%d",&arr[i]);
	  }
	  printf("Total price of ticket is = %d",ticket(arr,5));
}
      int ticket(int*arr,int size){
	  
      int price=100;
      int i;
      int dis;
      int total_ticket=0;
        for(i=0;i<size;i++){
        	  if(arr[i]<=12){
        	  	dis=(0.3*100);
				 dis=price-dis;
				 total_ticket+=dis;    
			  }
			 else if(arr[i]>=59){
			  
        	  	dis=(0.5*100);
				 dis=price-dis;
				 total_ticket+=dis;    
			  }
		  else{
		  	  total_ticket+=price;
		  }
		}
		return total_ticket;
	  }