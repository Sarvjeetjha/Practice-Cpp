#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next = NULL;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAt(int pos, int value)
    {
        int count = 1;
        if (size == 0)
            insertAtEnd(value);
        if(pos==1)insertAtHead(value);
        else{Node *newNode = new Node(value);
        Node *temp = head;
        while (count != pos-1)
        {
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;}
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList ll;
    cout << "size-->" << ll.size << endl;
    ll.insertAtEnd(10);
    cout << "size-->" << ll.size << endl;
    ll.display();
    ll.insertAtEnd(20);
    cout << "size-->" << ll.size << endl;
    ll.display();
    ll.insertAtEnd(30);
    cout << "size-->" << ll.size << endl;
    ll.display();
    ll.insertAtEnd(40);
    cout << "size-->" << ll.size << endl;
    ll.display();
    ll.insertAtHead(5);
    cout << "size-->" << ll.size << endl;
    ll.display();
    ll.insertAt(1,7);
    cout << "size-->" << ll.size << endl;
    ll.display();
    ll.insertAt(7,50);
    cout << "size-->" << ll.size << endl;
    ll.display();
}