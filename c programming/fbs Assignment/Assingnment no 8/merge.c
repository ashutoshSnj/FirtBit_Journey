#include<stdio.h>
void main2(int* arr, int saiz1, int* brr, int saiz2, int* crr, int saiz3);
void main()

{
	int saiz1,saiz2;
  printf("Enter the Array Size = ");
  scanf("%d",& saiz1);
  printf("Enter the Second  Array Size = ");
    scanf("%d",& saiz2);
    int arr[saiz1];
    int brr[saiz2];
    int saiz3=(saiz1+saiz2);
    int crr[saiz3];
    //main1(arr,saiz1,brr,saiz2,crr,saiz3);
    	main2(arr,saiz1,brr,saiz2,crr,saiz3);
    	
}


void main2(int*arr,int saiz1,int*brr,int saiz2,int*crr,int saiz3 )

{
		printf("enter the no\n");
			int i,j;
    for ( i=0;i<saiz1;i++){
    	scanf("%d", & arr[i]);
	}
	printf("enter the no\n");
	for (i=0;i<saiz2;i++){
    	scanf("%d", & brr[i]);
	}
	
	  for(i=0;i<saiz1;i++)
	  {
	   crr[i]=arr[i];
	  }

	  for(j=0;j<saiz2;j++)
	  {
	  	crr[i++]=brr[j];
	  }
	 for(int k=0;k<saiz3;k++){
	  	printf("%d",crr[k]);
	  }
	  
	  
}