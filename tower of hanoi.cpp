#include<iostream>
using namespace std;
hanoi(int n,char from, char aux, char to){
	if(n==1){
		cout<<"Move disk 1 from "<<from<<" to "<<to<<endl;
		return 0;
	}
	
	hanoi(n-1,from,to,aux);
	
	cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<endl;
	
	hanoi(n-1,aux,from,to);
}
int main()
{
	int n;
	cout<<"Enter the number of disk:";
	cin>>n;
	hanoi(n,'A','B','C');
	return 0;
}
