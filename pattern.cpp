#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n=1,i,j,k,l;
    for(i=4;i>=1;i--)
    {
        for(j=i;j>=1;j--){
            cout << " " ;
        }
        
        for(k=1;k<=n;k++){
            cout << k;
        }
        for(l=n-1;l>=1;l--){
        	cout << l;
		}
		
        n=n+1;
        cout << endl;
    }
    return 0;
}

