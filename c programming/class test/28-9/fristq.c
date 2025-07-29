#include<stdio.h>
float fun(int);
void main(){
	int cost;
	printf("Enter the cost of book = " );
	scanf("%d",& cost);
	printf("total cost of book is = %f",fun(cost));
	
}
     float fun(int cost){
     	float dis,totalcost;
     	if(cost<=200){
     		dis=(cost*0.5)/100;
     	   totalcost=(cost-dis);
     	   return totalcost;
		 }
		 else if(cost<=500){
     		dis=(cost*10.0)/100;
     	   totalcost=cost-dis;
     	   return totalcost;
		 	
		 }
		 else if(cost<=1000){
     		dis=(cost*15.0)/100;
     	   totalcost=cost-dis;
     	   return totalcost;
     	   
	 }
	    else if(cost>1000){
     		dis=(cost*20.0)/100;
     	   totalcost=cost-dis;
     	   return totalcost;
     }
     else
     {
     	printf("you have not discount");
     	return cost;
	 }
}