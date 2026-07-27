#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

Node* head = NULL;

void insertFront(int value)
{
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = head;

    head = newNode;
}

void insertEnd(int value)
{
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteFront()
{
    if(head == NULL)
    {
        cout<<"List Empty"<<endl;
        return;
    }

    Node* temp = head;

    head = head->next;

    delete temp;
}

void deleteEnd()
{
    if(head == NULL)
    {
        cout<<"List Empty"<<endl;
        return;
    }

    if(head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    while(temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;

    delete temp;
}

void display()
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";

        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

int main()
{
	  display();
    insertFront(20);
    insertFront(10);
    insertEnd(30);
    insertEnd(40);

    display();

    deleteFront();
    display();

    deleteEnd();
    display();

    return 0;
}
