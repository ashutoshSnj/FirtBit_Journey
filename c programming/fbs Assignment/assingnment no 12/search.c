#include<stdio.h>
int*search(int);
void main(){
		printf("Enter the size of = ");
	int size;
	scanf("%d",&size);
	 int*ptr=search(size);
	printf("Enter the no");
	int no;
	scanf("%d",&no);
	int flag=0;
	int i;
	   for(i=0;i<size;i++){
	   	if(no==ptr[i]){
		   
	   	printf(" index of this no = %d",i);
			printf("\npositon of this no is = %d",i+1);
			flag=1;
		}  	
	}
      if (flag==0){
			printf("no not found");
		}
		
	}
	
	  int* search(int size)
	

  {
  
	int*str=(int)malloc(sizeof(int)*size);
	for(int i=0;i<size;i++){
		scanf("%d",&str[i]);
	}
	return str;
}