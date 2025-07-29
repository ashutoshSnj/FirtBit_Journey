#include<stdio.h>
int* sort(int*,int);
void main(){
	int size;
	printf("Enter the size");
	scanf("%d",&size);
 int* arr;
 for(int i=0;i<size;i++){
 	 scanf("%d",&arr[i]);
 }
    int*ptr=sort(arr,size);
    for(int i=0;i<size;i++){
    	printf(" %d",ptr[i]);
	}
 
}


   int* sort(int*arr,int size) 
{
   int*str=(int*) malloc(sizeof (int)*size);
 int i,j;

  
  for (int i = 0; i < size; i++) {
        str[i] = arr[i];
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                
                int temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
   return str; 
}