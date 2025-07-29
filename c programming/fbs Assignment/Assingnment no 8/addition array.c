#include<stdio.h>
	void main1(int*,int ,int*,int ,int*,int );
	void main2(int *,int,int*,int,int*,int);
void main()
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