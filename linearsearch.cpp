#include<iostream>
using namespace std;

int main() {
	int arr[100],n,i,value;
	int key=-1;
	
	cout<<"Enter the number of elements:";
	cin>>n;
	
	cout<<"Enter the array elements as :";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the value you want to search in the array: ";
	cin>>value;
	
	for(i=0;i<n;i++){
		if(arr[i]==value){
			key=i;
			break;
		}
	}
	if(key != -1) {
		cout<<"The value is in index no: "<<key;
	}
	else{
		cout<<"The value you are searching for is not in the array";
	}
	return 0;
}
