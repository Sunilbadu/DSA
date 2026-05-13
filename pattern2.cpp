#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,x=6,l,m=1,n=4;
	for(i=n;i>=1;i--){
		for (j=i;j>=1;j--){
			cout << " ";
		}
		cout<<"*";
		if(i!=4){
		
		for(k=7-x;k>=1;k--){
			cout << " ";
		}
		x=x-2;
	}
		m=m+2;
		if(i<4){
			cout << "*";
		}
		
		cout << endl;

	}
	 
}
