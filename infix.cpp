#include<iostream>
#include<stack>
using namespace std;


int precedence(char op){
	if(op == '^' || op == '*' || op == '/'){
		return 2;
	}
		if(op == '-' || op == '+' ){
		return 1;
	}
	return 0;
}


bool isoperator(char ch ){
	return (ch=='^'||ch=='*'||ch=='+'||ch=='-'||ch=='('||ch==')'||ch=='/');
}


int main(){
	stack<char> s;
	char a[100];
	int i,n=0,j=0;
	
	
	cout<<"enter the expression (? to abort the input)";
 	do{
 		cin>>a[n];
 		n++;
	 }while(a[n-1]!='?');
	 n--;
	 
	 
	 char postfix[100];



	 for (i = 0 ; i< n ; i++){
	 	char ch = a[i];
	 	
	 	if(!isoperator(ch)){
	 		postfix[j++]=ch;
		 }
		
		else if(ch =='('){
			s.push(ch);
		}
		
		else if(ch==')'){
			while(!s.empty() && s.top()!='('){
				postfix[j++] = s.top();
				s.pop();
			}
			if(!s.empty()){
				s.pop();
			}
			
		}
		 else{
		 	while(!s.empty() && s.top()!='('&& precedence(s.top())>=precedence(ch) ){
		 		postfix[j++]=s.top();
		 		s.pop();
			 }
			 s.push(ch);
		 }
	
		 
		 
		 
	 }
	 	 while(!s.empty()){
		 	postfix[j++]=s.top();
		 	s.pop();
		 }
		 postfix[j] = '\0'; 
		 cout<<"Postfix is: "<<postfix;
		return 0;
}
