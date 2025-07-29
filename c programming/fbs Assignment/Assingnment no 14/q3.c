#include<stdio.h>
#include<string.h>
typedef struct Player{
	char name[20];
	int no;
	int runs[6];
	int wickets[6];
	
}Player;
void store(Player*,int);
void display(Player*,int);
void opration(Player*,int);

void main(){
	    int size;
	    printf("Enter the size");
	    scanf("%d",&size);
	    Player arr[size];
	    store(arr,size);
	    display(arr,size);
	    opration(arr,size);
}
  void store(Player*arr,int size){
  	for(int i=0;i<size;i++){
	  	getchar();
  		printf("Enter the name = ");
  	//	getchar();
  		fgets(arr[i].name,20,stdin);
  		int a=strlen(arr[i].name);
  		if(arr[i].name[a-1]=='\n'){
  			arr[i].name[a-1]='\0';
		  } 
  		printf("Enter the no = ");
  		scanf("%d",&arr[i].no);
  		printf("\nEnter the run of each mathces = ");
  		for(int j=0;j<arr[i].no;j++){
		  
  		  	    scanf("%d",&arr[i].runs[j]);
		}
			printf("Enter the wickets = ");
			 for(int j=0;j<arr[i].no;j++){
  		  	    scanf("%d",&arr[i].wickets[j]);
  		 	}
  		}
  	}
  		 void display(Player*arr,int size){
  		 	 for(int i=0;i<size;i++){
  		 	 	printf("\nName of Player = %s",arr[i].name);
  		 	 	printf("\nNO of mathces he played = %d",arr[i].no);
  		 	 	printf("\n Its run by all matches = ");
  		 	 	 for(int j=0;j<arr[i].no;j++){
  		  	    printf(" %d",arr[i].runs[j]);
  		 	}
  		 	  printf("\n wickets is = ");
  		 	  for(int j=0;j<arr[i].no;j++){
  		  	    printf(" %d",arr[i].wickets[j]);
				}
  		 	 
		   } 
		   
  }
    void opration(Player*arr,int size){
    	int brr[6];
    	int i=0;
    	int k=0;
    	int a=0;
    	int b;
    	for(int i=0;i<size;i++){
    		
		    a=0;
         for(int j=0;j<arr[i].no;j++){
  		  	    a=(arr[i].runs[j])+a;
  		 	}
  		 	brr[i]=a;
  		 	if(a>k){
  		 		k=a;
  		 		b=i;
			   }
  		 	
  		}
  		printf("\nmax run player is ");
  		display(&arr[b],1);
  		 int a1=0;
  		 k=0;
		 	for(int i=0;i<size;i++){
    		
		    
         for(int j=0;j<arr[i].no;j++){
  		  	    a1=(arr[i].wickets[j])+a1;
  		 	}
  		
  		 	if(a1>k){
  		 		k=a1;
  		 		b=i;
			   }
  		 	
  		}
  		  printf("\nplayer which give max wickets");
	        display(&arr[b],1);
	}