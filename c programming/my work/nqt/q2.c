/*#include<stdio.h>
void main(){
	printf("Enter the size = ");
	int size;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int j=0;
	for(int i=0;i<size;i++){
		if(arr[i]!=0){
		    arr[j]=arr[i];
		    j++;
		}
	}
	for(int i=j;i<size;i++){
		arr[i]=0;
	}
	for(int i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	
}*/
#include <stdio.h>
int main()
{
  int n, j = 0;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[j]);
    if (a[j] != 0)
    {
        j++;
    }
  }
  for (int i = 0; i < j; i++)
  {
      printf("%d ", a[i]);
  }
  return 0;
}