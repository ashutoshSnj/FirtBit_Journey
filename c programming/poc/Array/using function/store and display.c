#include <stdio.h>
void stor(int*,int);
void dis(int*,int);
//int cheek(int* ,int ,int );
void main(){
	int size;
	printf("Enter the size of arry\n");
	scanf("%d",& size);
	int arr[size];	
    stor(arr,size);
    dis(arr,size);
    //cheek(arr,size,no)
   /* int no=12;
    int b1=cheek(arr,size,no);
    if(b1) {
    	printf("no is present at %d index" ,b1);
	}
	else{
	   printf("no is not present");
	}*/
}
void stor(int*arr,int no){
	printf("enter the no = ");
	for(int i=0;i<no;i++){
		scanf("\n%d",& arr[i]);
	}
}
 void	dis(int*arr,int no)
	{
		printf("this is your arry\n");
		for(int i=0;i<no;i++){
		printf("%d\n", arr[i]);
		
	}
	int  cheek(int *arr,int a,int b){
			for(int i=0;i<a;i++){
				if(arr[i]==b){
					return i;
				}
				else if((i+1)==a)
				return 0;
			}
			
	}
}
