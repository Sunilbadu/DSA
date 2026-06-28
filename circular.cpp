#include<iostream>
#define MAX 5
using namespace std;

int front = -1;
int rear = -1;
int queue[MAX];

void enqueue(int value){
  if((rear+1)%MAX == front){
      cout<<"Queue overflow"<<endl;
  }
  
  if(front == -1)
  {
      front = rear = 0;
  }
  else{
      rear = (rear+1)%MAX;
  }
  queue[rear]=value;
}

void dequeue(){
    if(front == -1){
        cout<<"Queue Underflow";
    }
   cout<<endl<<"Deleted item: "<<queue[front]<<endl;
   if(front == rear){
       front = rear = -1;
   }
   else{
       front = (front+1)%MAX;
   }
}
int i;
void display(){
   if(front == -1){
        cout<<"Queue is empty";
    }
    cout<<"Queue Elements"<<endl;
    for(i=front; ; i=(i+1)%MAX){
        cout<<queue[i]<<" ";
        
        if(i == rear)
        break;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    
    dequeue();
    dequeue();
    
    enqueue(60);
    enqueue(70);
    
    display();
    return 0;
}
