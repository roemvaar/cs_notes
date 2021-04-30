// Data Structures -  Linked Lists
// Program to create a simple linked 
// list with three nodes

#include <iostream>

using namespace std;


class Node{
public:
    int data;
    Node* next;
};


int main()
{
    cout << "Linked Lists" << endl;

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    
    cout << "Head data: " << head->data << endl;
    cout << "Head points to: " << head->next << endl;
    
    head->data = 256;
    head->next = second;    // Links first node with second node
    
    second->data = 13;
    second->next = third;

    third->data = 7;
    third->next = NULL;     // Tail points to NULL

    cout << "Head data: " << head->data << endl;
    cout << "Head points to: " << head->next << endl;
    cout << "Second's address: " << second << endl;  
    cout << "Tail's points to: " << third->next << endl;

    return 0;
}

