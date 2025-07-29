void main(){
	int arr[5]={1,12,3,5,3};
int i,j;
int a=arr[0];
	for(i=0;i<5;i++){
		
	 for(j=i+1;j<5;j++){
	 	if(arr[i]<arr[j]){
		 
	 	int temp=arr[j];
	       arr[j]=arr[i];
	 	   arr[i]=temp;
	 }
	 }
}
   for(i=0;i<5;i++){
   	  printf(" %d",arr[i]);
   }
}
