#include<stdio.h>
 int* add (int*,int*,int);
void main(){
	int arr[5]={1,2,3,4};
	int brr[5]={2,3,4,4,8};
//	printf("%d",arr[4]);
	int no =5;
	int* ass=add(arr,brr,no);
  for (int i=0;i<no;i++)
  {
  	printf(" %d", ass[i]);
  }
}
    int* add(int*arr,int*brr,int no)
{
	 int*crr=(int*) malloc(sizeof (int)*no);
  for(int i=0;i<no;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	  return crr;  
}