#include<iostream>
using namespace std;

int main() {
	int arr[100],n,i,value;
	int high,low,mid;
	int key=-1;
	
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter the sorted elements of arrray: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the value you want to search in the array: ";
	cin>> value;
	
	high = n-1;
	low = 0;
	
	while(low <= high){
		mid = (high+low)/2;
		
		if(arr[mid]==value){
			key = mid;
			break;
		}
		else if(arr[mid]<value){
			low=mid+1;
		}
		else{
			high = mid -1;
		}
	}
	
	if(key != -1){
		cout<<"The value in the array is in index "<<key;
	}
	else{
		cout<<"The value you you are searching for is not in the array";
	}
	
	return 0;
	
}
