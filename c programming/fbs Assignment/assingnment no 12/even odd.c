#include<stdio.h>
int* main1(int);
void main(){
	int size;
		printf("Enter the size of arry\n");
	scanf("%d",& size);
	int*pqr=main1(size);
	printf("\nThese are the odd numbers");
	for(int j=0;j<size;j++){
		
		 if(pqr[j]%2==0)
		 {
		 printf("\n%d",pqr[j]);
		 }
		
}
	printf("\nThese are the odd numbers");
	
	for(int k=0;k<size;k++){
	
	   if(pqr[k]%2!=0){
	   
	   printf("\n%d",pqr[k]);
}
}
	
}
     int* main1(int size)
{
	int*str=(int*)malloc(sizeof (int)*size);
	printf("Enter the no\n");
	for(int i=0;i<size;i++){
		scanf("%d",& str[i]);
	}
	return str;
}