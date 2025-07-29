#include<stdio.h>
int*minmax(int);
void main(){
		printf("enter the size\n");
	int size;
	scanf("%d",&size);
	 int*str=minmax(size);
      int min =str[0];
	for(int j=0;j<size;j++){
	
		if(str[j]<min){
			min=str[j];
		}
	}
	printf(" this is min no %d \n",min);
	int max=str[0];
  for(int i=0;i<size;i++){
  	if(str[i]>max){
  		max=str[i];
	  }
  }
  printf("this is max no %d",max);
}

  int* minmax(int size)
{

	int*arr=(int*)malloc(sizeof (int)*size);
    printf("enter the no\n");
	for(int i=0;i<size;i++){
	scanf("%d",& arr[i]);
	}
	return arr;
}