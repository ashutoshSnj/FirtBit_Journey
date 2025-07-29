using namespace std;
#include<iostream>
	int main(){
	cout<<"enter the size"<<endl;
	int size;
	cin>>size;
	int arr[size];
	cout<<"Enter the no in array = ";
	int i;
	for( i=0;i<size;i++){
		cin>>arr[i];
	}
	
	for(i=0;i<size;i++){
		if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
			cout<<" "<<arr[i];
		}
	}
}
