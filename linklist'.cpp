#include <iostream>
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
    newNode->data =value;
    newNode->next = head;
    head = newNode;
}

void insertEnd(int value)
{
    Node* newNode= new Node();
    newNode->data = value;
    newNode->next =NULL;
    
    Node* temp = head;

    while(temp->next!= NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAtPosition(int value, int position)
{
    Node* newNode = new Node();
    newNode->data = value;

    if(position == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    for(int i =1; i < position - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}


void deleteFront()
{
    if(head == NULL)
    {
        cout << "List is Empty" << endl;
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
        cout << "List is Empty" << endl;
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
void deleteAtPosition(int position)
{
    if(head == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    if(position == 1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    for(int i = 1; i < position; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    delete temp;
}

void display()
{
    if(head == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    insertFront(20);
    insertFront(10);
    insertEnd(40);
    insertEnd(50);
    cout << "Initial List:" << endl;
    display();
    insertAtPosition(30, 3);
    cout << "\nAfter Inserting 30 at Position 3:" << endl;
    display();
    deleteFront();
    cout << "\nAfter Deleting from Beginning:" << endl;
    display();
    deleteEnd();
    cout << "\nAfter Deleting from End:" << endl;
    display();
    deleteAtPosition(2);
    cout << "\nAfter Deleting Position 2:" << endl;
    display();
    return 0;
}
