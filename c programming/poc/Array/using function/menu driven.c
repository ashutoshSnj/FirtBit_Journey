#include<stdio.h>
void stor();
void display(int*,int);
void main(){
	int choice;
	printf("Enter the choice\n 1) store and display \n 2) find min or max \n 3) cheek oddeven \n 4) addition of two array = ");
	scanf("%d",& choice);
	if(choice==1){
	      stor();
	}
	if(choice==2){
		minmax();
	}
	if(choice==3){
		oddeven();
	}
	if(choice==4){
		addarray();
	}
}
  void stor(){
  	printf("Enter the size of array = ");
  	int size;
  	scanf("%d",&size);
  	int arr[size];
  	printf("Enter the no in Array");
  	for(int i=0;i<size;i++){
  		scanf("%d",&arr[i]);
  		
	  }
	  display(arr,size);
}
   void stor1(int*arr,int size){
   	    printf("Enter the no in Array = ");
  	for(int i=0;i<size;i++){
  		scanf("%d",&arr[i]);
  		
	  }
   	
   }
	  void display(int*arr,int size){
	  	printf("This is your Array");
	  	for(int i=0;i<size;i++){
	  		printf("%d",arr[i]);
		  }
	  }
 	
void minmax()
{   
   int size;
   printf("Enter the size of arry = ");
   scanf("%d",&size);
   int arr[size];
       stor1(arr,size);
		int min =arr[0];
	for(int j=0;j<size;j++){
	
		if(arr[j]<min){
			min=arr[j];
		}
	}
	printf("This is a min no = %d",min);
	int max=arr[0];
	for(int i=0;i<size;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("\nThis is a max no = %d",max);
  
}

  void oddeven()
	{
		int size;
   printf("Enter the size ao arry");
   scanf("%d",&size);
   int arr[size];
   stor1(arr,size);
   
	
	printf("\nThese are the odd numbers");
	for(int j=0;j<size;j++){
		
		 if(arr[j]%2==0)
		 {
		 printf("\n%d",arr[j]);
		 }
		
}
	printf("\nThese are the odd numbers");
	
	for(int k=0;k<size;k++){
	
	   if(arr[k]%2!=0){
	   
	   printf("\n%d",arr[k]);
}
}
	
}

void addarray()
{
	int saiz1,saiz2;
  printf("Enter the Array Size = ");
  scanf("%d",& saiz1);
  printf("Enter the Second  Array Size = ");
    scanf("%d",& saiz2);
    int arr[saiz1];
    int brr[saiz2];
    int saiz3=(saiz1>saiz2?saiz1:saiz2);
    int crr[saiz3];
    main1(arr,saiz1,brr,saiz2,crr,saiz3);
    	main2(arr,saiz1,brr,saiz2,crr,saiz3);
}
    
    
    
	void main1(int*arr,int saiz1,int*brr,int saiz2,int*crr,int saiz3)
	{
	printf("enter the no\n");
    for (int i=0;i<saiz1;i++){
    	scanf("%d",&arr[i]);
	}
	printf("enter the no\n");
	for (int i=0;i<saiz2;i++){
    	scanf("%d",&brr[i]);
	}
	//main2(arr,saiz1,brr,saiz2,crr,saiz3);
  
}

void main2(int *arr,int saiz1,int *brr,int saiz2,int *crr,int saiz3){
	
	for(int i=0;i<saiz3;i++)
	{
		if(i<saiz1 && i<saiz2)
		{
			crr[i]=arr[i]+brr[i];
		}
		else if(i<saiz1){
			crr[i]=arr[i];
		}
		else if(i<saiz2){
			crr[i]=brr[i];
	}
		
	}
	  


for(int i=0;i<saiz3;i++) 
	{
		printf("\n%d",crr[i]);
	}        

}
  