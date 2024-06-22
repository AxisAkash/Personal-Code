#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

class LinkedList
{
private:
    Node* head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void traverse()
    {
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insert(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    bool search(int key)
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            if (temp->data == key)
                return true;
            temp = temp->next;
        }
        return false;
    }
};

int main()
{
    LinkedList myList;

    myList.insert(10);
    myList.insert(20);
    myList.insert(30);
    myList.insert(40);

    myList.traverse();

    int searchKey = 20;
    if (myList.search(searchKey))
        cout << searchKey << " found in the list." << endl;
    else
        cout << searchKey << " not found in the list." << endl;

    return 0;
}

