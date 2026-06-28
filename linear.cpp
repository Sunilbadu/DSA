#include<iostream>
#define MAX 5
using namespace std;

int front = -1;
int rear = -1;
int queue[MAX];

void enqueue(int value){
	if(rear == MAX-1){
		cout<<"Queue Overflow";
	}
	
	if(front == -1);
	front =0;
	rear++;
	queue[rear]=value;
}

void dequeue(){
	if(front == -1 || front>rear){
		cout<<"Queue Underflow";
	}
	cout<<endl<<"Deleted item: "<<queue[front]<<endl;
	front ++;
}

int i;
void display(){
	if(front == -1 || front>rear){
		cout<<"Queue is empty";
	}
	cout<<"Queue Elements: "<<endl;
	for(i=front;i<=rear;i++){
		cout<<queue[i]<<" ";
	}
}
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	display();
	dequeue();
	display();
	return 0;

