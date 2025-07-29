using namespace std;
#include<iostream>
	int main(){
	cout<<"Enter the size"<<endl;
	int size;
	cin>>size;
	int arr[size];
	cout<<"Enter the no in array = ";
	int i;
	for( i=0;i<size;i++){
		cin>>arr[i];
	}
	int no;
	cout<<"Enter the no = ";
	cin>>no;
	int j=size-no,temp,k=no;
	for( i=0;i<no;i++){
	  temp=arr[i];	  
	  arr[i]=arr[j];
	  arr[j]=arr[k];
	  arr[k]=temp;
      	   j++;
	       k++;
	}
	for(i=0;i<size;i++){
		cout<<" "<<arr[i];
	}
	
	
}