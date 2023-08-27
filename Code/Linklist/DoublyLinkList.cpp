#include <bits/stdc++.h>
using namespace std;

class node
{
    int data;
    node *prev;
    node *next;

public:
    node(int val)
    {
        data = val;
        prev = next = nullptr;
    }

    // Public getter methods to access private members
    int getData() { return data; }
    node *getPrev() { return prev; }
    node *getNext() { return next; }

    // Public setter methods to modify private members
    void setPrev(node *p) { prev = p; }
    void setNext(node *n) { next = n; }
};

// Function to print the doubly linked list from left to right with next pointer
void printNext(node *head)
{
    node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
}

// Function to print the doubly linked list from right to left with prev pointer
void printPrev(node *LastNode)
{
    node *temp = LastNode;

    while (temp != nullptr)
    {
        cout << temp->getData() << " ";
        temp = temp->getPrev();
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    node *dummy = new node(0);
    node *head = dummy;

    for (int i = 0; i < arr.size(); i++)
    {
        node *curr = new node(arr[i]);
        dummy->setNext(curr);
        curr->setPrev(dummy);
        dummy = dummy->getNext();
    }

    // Printing the doubly linked list from left to right with next pointer
    printNext(head->getNext());
    cout << "\n";

    // Adding to avoid dummy inclusion from right to left
    head = head->getNext();
    head->setPrev(nullptr);

    // Printing the doubly linked list from right to left with prev pointer
    printPrev(dummy);
}
