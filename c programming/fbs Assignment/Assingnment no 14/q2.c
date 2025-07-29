#include<stdio.h>
typedef struct{
	int sec;
	int min;
	int hr;
} Time;
void store(Time*,int);
void display(Time*,int);
 void opretion(Time*,int);
 void opretion(Time*,int);
 
void main(){
	int size;
	printf("Enter the size = ");
	scanf("%d",&size);
	Time tar[size];
	store(tar,size);
	display(tar,size);
	opretion(tar,size);

}
   void store(Time*tar,int size){
   
   	  for(int i=0;i<size;i++){
   	  	printf("\nEnter the hr = ");
   	  	 scanf("%d",&tar[i].hr);
   	  	 printf("\nEnter the min = ");
   	  	 scanf("%d",&tar[i].min);
   	  	 printf("\nEnter the sec = ");
   	  	 scanf("%d",&tar[i].sec);
   	  	 
		 }
		 
		 
   }
    void display(Time*tar,int size)
   { 
      
   	for(int i=0;i<size;i++){
   		printf("\nTime is = ");
   		printf(" %d",tar[i].hr);
   		printf(" %d",tar[i].min);
   		printf(" %d",tar[i].sec);
   		
	   }
   }
   
   void opretion(Time*tar,int size){
   	int j=0;
   	int no=0;
   	for(int i=0;i<size/2;i++){
   		printf("\nresult of addition in two min = %d",(tar[j].min)+(tar[j+1].min));
   		if(size)
   		 j++;
   		 }
	   for(int i=0;i<size;i++){
	   	   if(tar[i].sec>=60){
	   	   	  //tar[i].sec=tar[i].sec/60;
	   	   	  printf("\nupdated sec to min = %d",tar[i].sec/60);
			  }
	   }
	   for(int i=0;i<size;i++){
	   	
	   	 	 no=(tar[i].hr*3600)+no;
			
			no=(tar[i].min*60)+no;
			no=(tar[i].sec)+no;
	   }
	   printf("\nTotal sec is = %d",no);
	   
	   
	   //7200
   	     
   }
  